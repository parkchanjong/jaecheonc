#include <stdio.h>
#include <stdlib.h>


int main(void) {



	int money, price, change;

	printf("������ ��: ");
	scanf_s("%d", &money);

	printf("���ǰ�: ");
	scanf_s("%d", &price);

	change = money - price;
	printf("�Ž�����:  %d\n\n", change);

	int coin100s = change / 100;	// �Ž��������� 100�� ¥���� ���� ���
	change = change % 100;	// �Ž��������� 100�� ¥���� ���ְ� ���� ��

	int coin10s = change / 10;		// �Ž��������� 10�� ¥���� ���� ���
	change = change % 10;		// �Ž��������� 10�� ¥���� ���ְ� ���� ��

	printf("100�� ������ ����: %d\n", coin100s);
	printf("10�� ������ ����: %d\n", coin10s);




	system("PAUSE");
	return 0;
}
