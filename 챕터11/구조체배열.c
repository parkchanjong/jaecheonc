#include <stdio.h>
#define SIZE 3

typedef struct student {
	int number;
	char name[20];
	double grade;
}std;

int main(void)
{
	std list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("�й��Է�");
		scanf_s("%d", &list[i].number);
		printf("�̸��Է�");
		scanf_s("%d", list[i].name);
		printf("�����Է�");
		scanf_s("%d", &list[i].grade);
		printf("\n");
	}

	printf("\n=====================================\n");
	for (i = 0; i < SIZE; i++)
		printf("�й�:%d, �̸�:%s, ����: %f\n", &list[i].number, list[i].name, &list[i].grade);
	printf("\n=====================================\n");

	printf("\n");
	system("PAUSE");
}
