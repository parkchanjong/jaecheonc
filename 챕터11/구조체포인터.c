#include <stdio.h>

typedef struct student {
	int number;
	char name[20];
	double grade;
}STD;


int main(void)
{
	STD s = { 201765845, "홍홍홍",4.3 };
	STD *p; //변수의 주소
	p = &s;
	printf("\n\t 학번 %d 이름 = %s 학점 = %f \n", s.number, s.name, s.grade);

	printf("\n\t 학번 %d 이름 = %s 학점 = %f \n", (*p).number, (*p).name, (*p).grade);

	printf("\n\t 학번 %d 이름 = %s 학점 = %f \n", p->number, p->name, p->grade);//best



	printf("\n");
	system("PAUSE");
}

