//���Ḯ��Ʈ�� �ڷ� ����				*head �� *start�� �ٲ㺸��
//#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct Node //����ü ����
{
	char Name[20];		//����ü ���
	int Score;			//����
	struct Node *link;	//�ڱ� �ڻ�(Node * )�� ����Ű�� ������			�ڱ����� ����ü
} Node;				//������ ����ü struct Node��� Nodetkdyd

typedef struct
{
	Node *head;			//head ��带 Node ��üü������ ����

}LList_h;		//�̱���ü �̸��� LList_h




LList_h* createdLList_h(void);	//���� ���� ���� ����Ʈ�� head�����Լ�

int addNode(LList_h*, char name[20], int);	//����Ʈ�� �� ������(���) �� �߰��ϴ� �Լ�		int���� score     ù����LList_h* �ν���

int printLList(LList_h*);	//����Ʈ�� ȭ�� ����ϴ� �Լ�

void delNode(LList_h *, char del[20]);	//����Ʈ���� Ư�� �ڷ�(���)�� ����(����) �ϴ� �Լ�		�̸����� ����

int job();






int main(void)
{
	int choice;
	char name[20], del[20];
	int score;
	LList_h* head;
	FILE *fp = NULL;
	fopen_s(&fp, "student.txt", "r");// �б� �������� ���� fp�� ����

	if (fp == NULL)
	{
		printf("\n\t student.txt���� ������ �����ϴ�");
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
			printf("\t ���� �Է�: ");
			scanf_s("%s", name, 20);
			if (strcmp(name, "q") == 0)
				break;
			printf("\n ���� �Է�: ");
			scanf_s("%d", &score);

			printf("\n\t �Էµ����� : %s %d\n", name, score);
			addNode(head, name, score);
			printLList(head);
		case 2:
			printf("\n ������ �ڷ� �̸���?: ");
			scanf_s("%s", del, 20);
			printf("%s\n", del);
			delNode(head, del);
			break;
		case 3:
			printLList(head);
			break;
		case 0:
			printf("\n\t ���α׷��� ���� �մϴ�. \n\n ");
			exit(0);
			return 0;

		}
	}

	printf("\n");
	system("PAUSE");
}






LList_h* createdLList_h(void)
{
	LList_h * head;		//LList_h ����ü ������ head�� ����			head�� start�� �غ���

	head = (LList_h*)malloc(sizeof(LList_h));		//ù�ٿ� �����Ѱ��� �޸� �ּ� ����	�ʿ��� ��ŭ�� �ּҸ� �Ҵ�(4����Ʈ)  malloc-�޸� �Ҵ�޾� �ּҸ� �Ѱ���

	/*LList_h ����ü ����� ũ�⸸ŭ �޸𸮸� �Ҵ�޾�
		����ü ������(����)�� ���ּҸ� ����--�޸� �����Ҵ�*/

	head->head = NULL;			//�ڿ� head =���γ�� ���			head-> start

	/*LList_h ����ü�� ����� head�� ��ũ�κп� NULL�� ����
	�� ó�� head��带 ���� �����Ƿ�
	�� ��忡�� �ƹ� ��嵵 ����Ǿ� ���� ����*/

	printf("\n\t head�� �ּ� : %d  head->head�� �� : %d\n", sizeof(head), head->head);

	return head;		//�޸� �ּ�(head)����
}

int addNode(LList_h *head, char name[20], int score)	//������ ����ü�� �޸� �Ҵ�			�����Ҵ����� �޸� ��� �Ҵ�
{
	//������ head�� ������ x�� ���ڷ� ����Ʈ�� ���ο� ��带 �߰�

	Node *newNode;		//����ü Node�� ������ newNode�� ����			���ο� ��带 ������ ���
	Node *p, *q;		//����Ʈ ���� Node ������ p�� q�� ����		�۾��� ������

	//����ü Node�� ������ newNode�� �޸� ���� �Ҵ�
	newNode = (Node*)malloc(sizeof(Node));	//malloc ���ϰ� Node*

	p = head->head;		//ù��° ��带 ����Ű�� ����
	/*p�� head�� ��ũ head�� ���� - ù��° ������ �ּ�			�տ� head(������ start)�� �Ķ���� �ڴ� ���� head(���)
	�Ҵ���� �޸�(newNode)�� ����� �ʱ�ȭ*/

	strcpy_s(newNode->Name, 20, name);		//�Ķ���� name			�Ҵ���� �޸�(�����) �� ä�� �ֱ�
	newNode->Score = score;
	//newNode�� ��� Score�� score�� �޾ƿ� ���� ����
	newNode->link = NULL;
	//������ newNode�� ����Ű�� ��� link�� NULL ������ ����  - �ʱ�ȭ �����ش�


	if (p == NULL)		/*���� head�� ��ũ �κ��� NULL�̸�
							�� ���� �̸���Ʈ�� ��尡 �ϳ��� ������*/
	{
		head->head = newNode;		//������� �ּҸ� �־� �ش�
		//head�� ����Ű�� ��Ŀ head�� ���� �Ҵ���� �޸� �ּҸ� ����

		return(0);		//�� �Լ� ���� ����
	}
	else
	{
		newNode->link = head->head;		//������� ��ũ�� ���� ������ ����� ��Ŀ�� ����		NULL�� �ʱ�ȭ �Ȱ��� �ٲ���   ���߿� �߰��Ǵ� �޸𸮰� ���ο� ������
		//newNode�� ���� ä���ְ� newNode�� ���Ḯ��Ʈ�� ����
		head->head = newNode;	//���� ������ ����� ��ũ�� �� ����� �ּҸ� ����			�ٽ� �߰� �Ҽ��� �ٲپ���

		return 0;		//�� �Լ� Ż��
	}
}

int printLList(LList_h* head)
{
	Node *p;	//����Ʈ ���� ������p
	p = head->head;
	//p�� head�� head�� �ʱ�ȭ(ù��° ��带 ����Ű�� �ִ�)		p�� �о��

	if (p == NULL)	//p�� ����Ű�� �ּҰ� �����Ƿ�
	{
		printf("\n\t �� ����Ʈ �Դϴ�.");
		return;		//�� �Լ� Ż��
	}

	//ù��° ������ ������ ������ �����͸� ���
	while (p->link != NULL)
	{
		printf(" %s-> ", p->Name);		//2 -> �������� ���
		p = p->link;		//�������� �̵�

	}
	printf(" %s : end ", p->Name);	//������ ��忡�� -> ���� ���
	return 0;
}

void delNode(LList_h *head, char del[20])
{
	Node *p, *q;	//����Ʈ ���� Node������ p,q�� ����
	printf("\n\t ������ ������ : %s\n", del);

	p = head->head; //������ p�� �ʱ�ȭ
	q = p;
	if (p == NULL)		//����Ʈ�� ����� ��尡 ���� ���
	{
		printf("\n\t �� ����Ʈ �Դϴ�.");
		return;
	}

	//ù��° ��尡 ������ ����̸�
	if (strcmp(p->Name, del) == 0)
	{
		head->head = p->link;
		//head�� ��Ŀ�� ù��° ����� ��Ŀ(�ι�°����� �ּ�) �� 
		free(p);		//������ �����Ͱ� ����� �޸� �ݳ�
		return;		//�� �Լ� ����
	}

	while (p->link != NULL)	//������ ������
	{

		q = p;		//������ q�� ������p�� �ٷ� ���� ��带 ����Ű�� �Ѵ�
		p = p->link;	//p�� ���� �븣�� �̵�

		if (strcmp(p->Name, del) == 0)		//p�� ����Ű�� ����� �����Ͱ� ������ ���̸�
			break;		//�̺���� �����
	}
	//���� p�� ������ ��带 ����Ű��, q�� ������ ����� ���� ��带 ����Ű�� �ִ�

	if (p->link == NULL && strcmp(p->Name, del) != 0)
	{//������ ����� �����Ͱ� ������  ���� �ƴ� ���
		printf("\n\t %s�� �� ����Ʈ�� �����ϴ�.\n", del);
		//���ٴ� �޽����� �����
		return;		//�Լ�����
	}
	else		//������ ��������� ���� ���� ������ ��带 ã������
	{
		q->link = p->link;
		//������ ����� ��Ŀ�� ���� ����� ��Ŀ�� ����
		free(p);		//������ ����� �ּ�(p)�� �ݳ�
		return;
	}
}

int job()
{
	while (1)		//����ڰ� �۾��� ������ ����
	{
		int choice;
		printf("\n\t �۾� ���� (1:����)(2:����)(3:���)(0:����) :");
		scanf_s("%d", &choice);
		//����ڰ� �Է��� �۾� ��ȣ�� choice�� ����

		if (choice < 0 || choice>4)
			//�۾� �̿���  ��ȣ�� �Է����� ���
			continue;		//���� �۾��� �����

		return choice;		//����ڰ� �Է��� �۾����� 

	}
}

