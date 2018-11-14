#include <stdio.h>

long factorial(int n);

int main(void)
{
	int x = 0, result;

	printf("정수를 입력하시오:");
	scanf_s("%d", &x);

	result = factorial(x);
	printf("\n\t%d!은 %d입니다.\n\n", x, result);

	system("PAUSE");
}

int factorial(int n)
{
	printf("factorial(%d)\n", n);

	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}
