#include <stdio.h>

int sub(int n);

int main(void)
{
	int x = 0, result;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &x);

	result = sub(x);
	printf("\n\t%d + (%d-3)...�� %d�Դϴ�.\n\n", x, x, result);

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
