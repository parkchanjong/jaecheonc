#include<stdio.h>
#include <stdlib.h>//헤더파일

int main(void)
{
	int x;
	int y;
	int sum;

	printf("첫 번째 숫자를 입력하시오:");
	scanf_s("%d", &x);			//스캔f에서는 &(주소연산자)가 필수

	printf("두 번째 숫자를 입력하시오:");
	scanf_s("%d", &y);

	sum = x + y;
	printf("두의 합= %d \n", sum);

	return 0;
	system("PAUSE");

}