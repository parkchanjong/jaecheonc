#include <stdio.h>




int main(void) {





	char op;
	int x, y;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d %c %d", &x, &op, 1, &y);

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





	system("PAUSE");
	return 0;
}
