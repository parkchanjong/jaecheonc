#include <stdio.h>





int main(void) {

	int val;

	printf("�� �ڸ� ���� �Է� : ");
	scanf_s("%d", &val);

	printf("100�� �ڸ��� �� : %d \n", val / 100);
	val = val % 100;
	printf("10�� �ڸ��� �� : %d \n", val / 10);
	val = val % 10;
	printf("1�� �ڸ��� �� : %d \n", val);





	system("PAUSE");

}
