#include<stdio.h>
#define EXCHANGE_RATE	1120

int main(void)
{
	int usd;
	int krw;

	printf("�޷�ȭ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &usd);
	krw = EXCHANGE_RATE * usd;
	printf("�޷�ȭ %d�޷��� %d���Դϴ�.\n",usd,krw);

	return 0;
}