#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s;

	s.number = 20170001;
	strcpy_s(s.name, 10, "Ȧ����");
	s.grade = 4.3;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %f\n", s.grade);




	printf("\n");
	system("PAUSE");
}
