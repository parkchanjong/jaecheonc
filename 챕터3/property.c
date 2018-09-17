#include<stdio.h>

int main(void)
{
	int property;
	int saving;

	printf("매달 저축 금액을 입력하시오: ");
	scanf("%d", &savig);

	property = saving * 12 * 30;
	printf("30년 후의 재산 = %d원 \n", property);

	return 0;
}