//연결리스트에 자료 삽입				*head 를 *start로 바꿔보자
//#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct Node //구조체 선언
{
	char Name[20];		//구조체 멤버
	int Score;			//점수
	struct Node *link;	//자기 자산(Node * )을 가리키는 포인터			자기참조 구조체
} Node;				//앞으로 구조체 struct Node대신 Nodetkdyd

typedef struct
{
	Node *head;			//head 노드를 Node 구체체형으로 선언

}LList_h;		//이구조체 이름은 LList_h




LList_h* createdLList_h(void);	//전달 인자 없이 리스트의 head생성함수

int addNode(LList_h*, char name[20], int);	//리스트에 새 데이터(노드) 를 추가하는 함수		int에는 score     첫인자LList_h* 로시작

int printLList(LList_h*);	//리스트를 화면 출력하는 함수

void delNode(LList_h *, char del[20]);	//리스트에서 특정 자료(노드)를 삭제(제거) 하는 함수		이름으로 삭제

int job();






int main(void)
{
	int choice;
	char name[20], del[20];
	int score;
	LList_h* head;
	FILE *fp = NULL;
	fopen_s(&fp, "student.txt", "r");// 읽기 전용으로 열러 fp에 저장

	if (fp == NULL)
	{
		printf("\n\t student.txt란느 파일이 없습니다");
		return 0;
	}

	head = createdLList_h();
	printf("\n\t");
	while (!feof(fp))
	{
		fscanf_s(fp, "%s", name, 20);
		fscanf_s(fp, "%d", &score);
		printf("\n %s %d\n\t", name, score);
		addNode(head, name, score);
	}
	fclose(fp);

	printf("\n\n");
	printLList(head);



	while (1)
	{
		choice = job();
		switch (choice)
		{
		case 1:
			printf("\t 성명 입력: ");
			scanf_s("%s", name, 20);
			if (strcmp(name, "q") == 0)
				break;
			printf("\n 점수 입력: ");
			scanf_s("%d", &score);

			printf("\n\t 입력데이터 : %s %d\n", name, score);
			addNode(head, name, score);
			printLList(head);
		case 2:
			printf("\n 삭제할 자료 이름은?: ");
			scanf_s("%s", del, 20);
			printf("%s\n", del);
			delNode(head, del);
			break;
		case 3:
			printLList(head);
			break;
		case 0:
			printf("\n\t 프로그램을 종료 합니다. \n\n ");
			exit(0);
			return 0;

		}
	}

	printf("\n");
	system("PAUSE");
}






LList_h* createdLList_h(void)
{
	LList_h * head;		//LList_h 구조체 포인터 head를 생성			head를 start로 해보자

	head = (LList_h*)malloc(sizeof(LList_h));		//첫줄에 선언한곳에 메모리 주소 저장	필요한 만큼의 주소를 할당(4바이트)  malloc-메모리 할당받아 주소를 넘겨줌

	/*LList_h 구조체 노드의 크기만큼 메모리를 할당받아
		구조체 포인터(본부)에 그주소를 저장--메모리 동적할당*/

	head->head = NULL;			//뒤에 head =본부노드 멤버			head-> start

	/*LList_h 구조체의 멤버의 head의 링크부분에 NULL을 저장
	맨 처음 head노드를 연결 했으므로
	이 노드에는 아무 노드도 연결되어 있지 않음*/

	printf("\n\t head의 주소 : %d  head->head의 값 : %d\n", sizeof(head), head->head);

	return head;		//메모리 주소(head)리턴
}

int addNode(LList_h *head, char name[20], int score)	//저장할 구조체의 메모리 할당			동적할당으로 메모리 계속 할당
{
	//포인터 head와 데이터 x를 인자로 리스트의 새로운 노드를 추가

	Node *newNode;		//구조체 Node의 포인터 newNode를 선언			새로운 노드를 저장할 노드
	Node *p, *q;		//리스트 운용용 Node 포인터 p와 q를 선언		작업용 포인터

	//구조체 Node의 포인터 newNode에 메모리 동적 할당
	newNode = (Node*)malloc(sizeof(Node));	//malloc 리턴값 Node*

	p = head->head;		//첫번째 노드를 가리키고 있음
	/*p에 head의 링크 head를 저장 - 첫번째 원소의 주소			앞에 head(포인터 start)는 파라미터 뒤는 본부 head(멤버)
	할당받은 메모리(newNode)의 멤버를 초기화*/

	strcpy_s(newNode->Name, 20, name);		//파라미터 name			할당받은 메모리(뉴노드) 값 채워 넣기
	newNode->Score = score;
	//newNode의 멤버 Score에 score로 받아온 정수 저장
	newNode->link = NULL;
	//포인터 newNode가 가리키는 멤버 link에 NULL 포인터 저장  - 초기화 시켜준다


	if (p == NULL)		/*현재 head의 링크 부부이 NULL이면
							즉 현지 이리스트에 노드가 하나도 없으면*/
	{
		head->head = newNode;		//새노드의 주소를 넣어 준다
		//head가 가리키는 링커 head에 새로 할당받은 메모리 주소를 저장

		return(0);		//이 함수 실행 종료
	}
	else
	{
		newNode->link = head->head;		//새노드의 링크에 현재 마지막 노드의 링커를 저장		NULL로 초기화 된것을 바꿔줌   나중에 추가되는 메모리가 본부에 붙을때
		//newNode를 먼저 채워주고 newNode를 연결리스트에 연결
		head->head = newNode;	//형재 마지막 노드의 링크에 새 노드의 주소를 저장			다시 추가 할수록 바꾸어줌

		return 0;		//이 함수 탈출
	}
}

int printLList(LList_h* head)
{
	Node *p;	//리스트 운용용 포인터p
	p = head->head;
	//p를 head의 head로 초기화(첫번째 노드를 가리키고 있다)		p로 읽어간다

	if (p == NULL)	//p가 가리키는 주소가 없으므로
	{
		printf("\n\t 빈 리스트 입니다.");
		return;		//이 함수 탈출
	}

	//첫번째 노드부터 마지막 노드까지 데이터만 출력
	while (p->link != NULL)
	{
		printf(" %s-> ", p->Name);		//2 -> 형식으로 출력
		p = p->link;		//다음노드로 이동

	}
	printf(" %s : end ", p->Name);	//마지막 노드에는 -> 없이 출력
	return 0;
}

void delNode(LList_h *head, char del[20])
{
	Node *p, *q;	//리스트 운용용 Node포인터 p,q를 선언
	printf("\n\t 삭제할 데이터 : %s\n", del);

	p = head->head; //포인터 p의 초기화
	q = p;
	if (p == NULL)		//리스트에 연결된 노드가 없을 경우
	{
		printf("\n\t 빈 리스트 입니다.");
		return;
	}

	//첫번째 노드가 삭제할 노드이면
	if (strcmp(p->Name, del) == 0)
	{
		head->head = p->link;
		//head의 링커를 첫번째 노드의 링커(두번째노드의 주소) 로 
		free(p);		//삭제할 데이터가 저장된 메모리 반납
		return;		//이 함수 종료
	}

	while (p->link != NULL)	//마지막 노드까지
	{

		q = p;		//포인터 q는 포인터p의 바로 이전 노드를 가리키게 한다
		p = p->link;	//p를 다음 노르도 이동

		if (strcmp(p->Name, del) == 0)		//p가 가리키는 노드의 데이터가 삭제할 값이면
			break;		//이블록을 벗어난다
	}
	//현재 p는 삭제할 노드를 가리키고, q는 삭제할 노드의 직전 노드를 가리키고 있다

	if (p->link == NULL && strcmp(p->Name, del) != 0)
	{//마지막 노드의 데이터가 삭제할  값이 아닌 경우
		printf("\n\t %s는 이 리스트에 없습니다.\n", del);
		//없다는 메시지를 남기고
		return;		//함수종료
	}
	else		//마지막 노드인지와 관계 없이 삭제할 노드를 찾았으면
	{
		q->link = p->link;
		//삭제할 노드의 링커를 지적 노드의 링커로 지정
		free(p);		//삭제할 노드의 주소(p)를 반납
		return;
	}
}

int job()
{
	while (1)		//사용자가 작업의 내용을 결정
	{
		int choice;
		printf("\n\t 작업 선택 (1:삽입)(2:삭제)(3:출력)(0:종료) :");
		scanf_s("%d", &choice);
		//사용자가 입력한 작업 번호를 choice에 저장

		if (choice < 0 || choice>4)
			//작업 이외의  번호를 입력했을 경우
			continue;		//현재 작업을 계속함

		return choice;		//사용자가 입력한 작업으로 

	}
}

