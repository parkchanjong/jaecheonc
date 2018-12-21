
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct Node
{
	char Name[20];
	int Score;
	struct Node *link;
} Node;

typedef struct
{
	Node *head;

}LList_h;




LList_h* createdLList_h(void);

int addNode(LList_h*, char name[20], int);

int printLList(LList_h*);

void delNode(LList_h *, char del[20]);

int job();






int main(void)
{
	int choice;
	char name[20], del[20];
	int score;
	LList_h* head;
	FILE *fp = NULL;
	fopen_s(&fp, "student.txt", "r");

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
	LList_h * head;

	head = (LList_h*)malloc(sizeof(LList_h));



	head->head = NULL;



	printf("\n\t head의 주소 : %d  head->head의 값 : %d\n", sizeof(head), head->head);

	return head;
}

int addNode(LList_h *head, char name[20], int score)
{


	Node *newNode;
	Node *p, *q;


	newNode = (Node*)malloc(sizeof(Node));

	p = head->head;


	strcpy_s(newNode->Name, 20, name);
	newNode->Score = score;

	newNode->link = NULL;



	if (p == NULL)
	{
		head->head = newNode;

		return(0);
	}
	else
	{
		newNode->link = head->head;

		head->head = newNode;

		return 0;
	}
}

int printLList(LList_h* head)
{
	Node *p;
	p = head->head;


	if (p == NULL)
	{
		printf("\n\t 빈 리스트 입니다.");
		return;
	}


	while (p->link != NULL)
	{
		printf(" %s-> ", p->Name);
		p = p->link;

	}
	printf(" %s : end ", p->Name);
	return 0;
}

void delNode(LList_h *head, char del[20])
{
	Node *p, *q;
	printf("\n\t 삭제할 데이터 : %s\n", del);

	p = head->head;
	q = p;
	if (p == NULL)
	{
		printf("\n\t 빈 리스트 입니다.");
		return;
	}


	if (strcmp(p->Name, del) == 0)
	{
		head->head = p->link;

		free(p);
		return;
	}

	while (p->link != NULL)
	{

		q = p;
		p = p->link;

		if (strcmp(p->Name, del) == 0)
			break;
	}


	if (p->link == NULL && strcmp(p->Name, del) != 0)
	{
		printf("\n\t %s는 이 리스트에 없습니다.\n", del);

		return;
	}
	else
	{
		q->link = p->link;

		free(p);
	}
}

int job()
{
	while (1)
	{
		int choice;
		printf("\n\t 작업 선택 (1:삽입)(2:삭제)(3:출력)(0:종료) :");
		scanf_s("%d", &choice);


		if (choice < 0 || choice>4)

			continue;

		return choice;

	}
}

