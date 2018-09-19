#include <stdio.h>
#include <stdlib.h>//헤더파일
#define EXCHANGE_RATE	1120

int main(void)
{
	int usd;
	int krw;

	printf("달러화 금액을 입력하시오: ");
	scanf_s("%d", &usd);
	krw = EXCHANGE_RATE * usd;
	printf("달러화 %d달러는 %d원입니다.\n", usd, krw);


	return 0;
}
