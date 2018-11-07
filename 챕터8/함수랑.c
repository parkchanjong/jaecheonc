#include <stdio.h>

void print_name()
{
	printf("****************************\n");
	printf("한국대학교 컴퓨터 공학과 \n");
	printf("홍길동 \n");
	printf("****************************\n");
}

int main(void)
{
	int i;
	for (i = 0; i < 3; i++)
		print_name();

	system("PAUSE");
}
