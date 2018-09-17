#include<stdio.h>

int main(void)
{
	char c;

	printf("문자를 입력하시오: ");
	scanf("%c", &c);

	printf("입력된 문자는 %c입니다\n",c);
	return 0;
}