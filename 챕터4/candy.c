#include <stdio.h>
#include <stdlib.h>


int main(void) {



	int money;
	int candy_price;

	printf("���� ������ �ִ� ��: ");
	scanf_s("%d", &money);
	printf("ĵ���� ����: ");
	scanf_s("%d", &candy_price);

	// �ִ��� �� �� �ִ� ���� �� 
	int n_candies = money / candy_price;
	printf("�ִ�� �� �� �ִ� ĵ���� ����=%d \n", n_candies);

	// ������ �����ϰ� ���� ��
	int change = money % candy_price;
	printf("ĵ�� ���� �� ���� ��=%d \n", change);





	system("PAUSE");
	return 0;
}
