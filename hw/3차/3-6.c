#include <stdio.h>

int sumfun(int n);

int main(void) {

	int  n, sum = 0;

	printf("정수를 입력하시오: \n");
	scanf_s("%d", &n);
	sumfun(n);

	sum = sumfun(n);


	printf("0부터 %d 까지의 합은 %d 입니다 \n", n, sum);

	printf("\n");
	system("PAUSE");
}

int sumfun(int n) {
	int i, sum = 0;
	for (i = 0; i <= n; i++)
		sum += i;
	return sum;
}