#include <stdio.h>

typedef struct student {
	int number;
	char name[20];
	double grade;
}STD;


int main(void)
{
	STD s = { 201765845, "ȫȫȫ",4.3 };
	STD *p; //������ �ּ�
	p = &s;
	printf("\n\t �й� %d �̸� = %s ���� = %f \n", s.number, s.name, s.grade);

	printf("\n\t �й� %d �̸� = %s ���� = %f \n", (*p).number, (*p).name, (*p).grade);

	printf("\n\t �й� %d �̸� = %s ���� = %f \n", p->number, p->name, p->grade);//best



	printf("\n");
	system("PAUSE");
}

