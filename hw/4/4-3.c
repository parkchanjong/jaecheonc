
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
	LList_h * head;

	head = (LList_h*)malloc(sizeof(LList_h));



	head->head = NULL;



	printf("\n\t head�� �ּ� : %d  head->head�� �� : %d\n", sizeof(head), head->head);

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
		printf("\n\t �� ����Ʈ �Դϴ�.");
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
	printf("\n\t ������ ������ : %s\n", del);

	p = head->head;
	q = p;
	if (p == NULL)
	{
		printf("\n\t �� ����Ʈ �Դϴ�.");
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
		printf("\n\t %s�� �� ����Ʈ�� �����ϴ�.\n", del);

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
		printf("\n\t �۾� ���� (1:����)(2:����)(3:���)(0:����) :");
		scanf_s("%d", &choice);


		if (choice < 0 || choice>4)

			continue;

		return choice;

	}
}

