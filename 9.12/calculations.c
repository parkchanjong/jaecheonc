#include<stdio.h>
#include <stdlib.h>//헤더파일

int main(void)
{
	int x;			
	int y;
	int result;

	printf("정수 2개 입력:");
	scanf_s("%d%d", &x,&y);		//띄어쓰기나 엔터 까지 읽는다

	result = x + y;
	printf("두수의 합= %d \n",result);
	result = x - y;
	printf("두수의 차= %d \n", result);
	result = x * y;
	printf("두수의 곱= %d \n", result);
	result = x / y;
	printf("두수의 몫= %d \n", result);


	return 0;
	system("PAUSE");

}