#include <stdio.h>

int sumfun(int n);

int main(void) {

	int  n, sum = 0;

	printf("������ �Է��Ͻÿ�: \n");
	scanf_s("%d", &n);
	sumfun(n);

	sum = sumfun(n);


	printf("0���� %d ������ ���� %d �Դϴ� \n", n, sum);

	printf("\n");
	system("PAUSE");
}

int sumfun(int n) {
	int i, sum = 0;
	for (i = 0; i <= n; i++)
		sum += i;
	return sum;
}