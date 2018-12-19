#include <stdio.h>

void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);

int main(void) {
	int n1, n2;
	char op;

	while (1) {
		printf("연산을 입력하시오(종료는 Ctrl+C): ");
		scanf_s("%d%c%d", &n1, &op, &n2);

		switch (op) {
		case '+': add(n1, n2);
			break;
		case '-': sub(n1, n2);
			break;
		case '*': mul(n1, n2);
			break;
		case '/': div(n1, n2);
			break;
		}
	}

	printf("\n");
	system("PAUSE");
}

void add(int a, int b) {
	static int sadd = 1;

	printf("덧셈은 총 %d번 호출되었습니다.\n", sadd++);
	printf("연산 결과 : %d\n", a + b);

}

void sub(int a, int b) {
	static int ssub = 1;

	printf("뺄셈은 총 %d번 호출되었습니다.\n", ssub++);
	printf("연산 결과 : %d\n", a - b);
}

void mul(int a, int b) {
	static int smul = 1;

	printf("곱셈은 총 %d번 호출되었습니다.\n", smul++);
	printf("연산 결과 : %d\n", a*b);
}

void div(int a, int b) {
	static int sdiv = 1;

	printf("나눗셈은 총 %d번 호출되었습니다.\n", sdiv++);
	printf("연산 결과 : %d\n", a / b);
}