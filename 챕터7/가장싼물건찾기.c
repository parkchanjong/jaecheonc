
#include <stdio.h>
#define SIZE 10





int main(void) {

	int prices[SIZE] = { 12, 3, 19, 6, 18, 8, 12, 4, 1, 19 };
	int i, minimum;
	printf("[ ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", prices[i]);
	}
	printf("]\n");

	minimum = prices[0];		//ù�ּҰ��� ù�迭��
	for (i = 1; i < SIZE; i++)	//i=0���� �ϸ� 1���� ���Ѵ�
	{
		if (prices[i] < minimum)		//min���� ������ �ٲ�    ��=9  ��ȯ=2��
			minimum = prices[i];
	}
	printf("�ּҰ��� %d�Դϴ�.\n", minimum);


	system("PAUSE");

}