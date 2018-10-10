#include <stdio.h>




int main(void) {





	char op;
	int x, y;

	printf("수식을 입력하시오: ");
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
		printf("지원되지 않는 연산자입니다. \n");





	system("PAUSE");
	return 0;
}
