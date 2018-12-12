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
		printf("학번입력");
		scanf_s("%d", &list[i].number);
		printf("이름입력");
		scanf_s("%d", list[i].name);
		printf("학점입력");
		scanf_s("%d", &list[i].grade);
		printf("\n");
	}

	printf("\n=====================================\n");
	for (i = 0; i < SIZE; i++)
		printf("학번:%d, 이름:%s, 학점: %f\n", &list[i].number, list[i].name, &list[i].grade);
	printf("\n=====================================\n");

	printf("\n");
	system("PAUSE");
}
