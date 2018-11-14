#include <stdio.h>

int sub(int n);

int main(void)
{
	int x = 0, result;

	printf("정수를 입력하시오:");
	scanf_s("%d", &x);

	result = sub(x);
	printf("\n\t%d + (%d-3)...은 %d입니다.\n\n", x, x, result);

	system("PAUSE");
}

int sub(int n)
{
	printf("sub(%d)\n", n);

	if (n <= 0)
		return 0;
	else
		return n + sub(n - 3);
}
