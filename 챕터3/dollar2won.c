#include <stdio.h>
#include <stdlib.h>//�������
#define EXCHANGE_RATE	1120

int main(void)
{
	int usd;
	int krw;

	printf("�޷�ȭ �ݾ��� �Է��Ͻÿ�: ");
	scanf_s("%d", &usd);
	krw = EXCHANGE_RATE * usd;
	printf("�޷�ȭ %d�޷��� %d���Դϴ�.\n", usd, krw);


	return 0;
}
