// ������ ��� ���� ���α׷�
#include <stdio.h>

int main(void)
{
	char op;
	int x, y;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
		printf("%d \n", x + y);
	else if (op == '-')
		printf("%d \n", x - y);
	else if (op == '*')
		printf("%d \n", x * y);
	else if (op == '/')
		printf("%d \n", x / y);
	else
		printf("�������� �ʴ� �������Դϴ�. \n");

	return 0;
}
