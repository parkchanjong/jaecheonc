#include<stdio.h>
#include <stdlib.h>//�������

int main(void)
{
	int sum = 0;			//���� �����ؼ� ����ҋ� 0���� �ʱ�ȭ�� ����Ѵ�
	int price;			//������ ���� ��������μ� ȿ������ �޸𸮻��
	int days;

	printf("      ������ ���? : ");
	scanf_s("%d", &days);

	printf("       �װ��� ���� : ");
	scanf_s("%d", &price);
	sum = sum + price;		//���Թ��� �������� ���� ����Ѵ�

	printf("     ȣ�� 1�� ���� : ");
	scanf_s("%d", &price);
	sum = sum + days * price;

	printf("�Ϸ翡 �ʿ��� �뵷 : ");
	scanf_s("%d", &price);
	sum = sum + (days + 1) * price;

	printf("=======================================\n ");
	printf("       �� ���� ���: %d \n ", sum);
	printf("=======================================\n ");



	return 0;
	system("PAUSE");

}