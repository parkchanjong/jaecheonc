
#include <stdio.h>
#define SIZE 31





int main(void) {
	int A[SIZE] = { 0 }, i = 0, n, x, k;
	printf("10진수 입력 : ");
	scanf_s("%d", &n);
	x = n;
	while (1)
	{
		A[i] = x % 2;
		x = x / 2;
		if (x == 0)
			break;
		i++;
	}
	printf("\n %d 의 2진수 : ", n);

	for (k = i; k >= 0; k--)
	{
		printf("%2d", A[k]);
	}
	printf("\n\n");





	system("PAUSE");

}