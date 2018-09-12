#include<stdio.h>
#include <stdlib.h>//헤더파일

int main(void)
{
	int sum = 0;			//값을 누적해서 사용할떄 0으로 초기화해 사용한다
	int price;			//변수를 적게 사용함으로서 효율적인 메모리사용
	int days;

	printf("      여행은 몇박? : ");
	scanf_s("%d", &days);

	printf("       항공권 가격 : ");
	scanf_s("%d", &price);
	sum = sum + price;		//대입문의 오른쪽을 먼저 계산한다

	printf("     호텔 1박 가격 : ");
	scanf_s("%d", &price);
	sum = sum + days * price;

	printf("하루에 필요한 용돈 : ");
	scanf_s("%d", &price);
	sum = sum + (days + 1) * price;

	printf("=======================================\n ");
	printf("       총 여행 비용: %d \n ", sum);
	printf("=======================================\n ");



	return 0;
	system("PAUSE");

}