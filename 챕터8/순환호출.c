#include <stdio.h>

long factorial(int n);

int main(void)
{
	int x = 0, result;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &x);

	result = factorial(x);
	printf("\n\t%d!�� %d�Դϴ�.\n\n", x, result);

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
