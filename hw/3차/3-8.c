#include <stdio.h>

void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);

int main(void) {
	int n1, n2;
	char op;

	while (1) {
		printf("������ �Է��Ͻÿ�(����� Ctrl+C): ");
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

	printf("������ �� %d�� ȣ��Ǿ����ϴ�.\n", sadd++);
	printf("���� ��� : %d\n", a + b);

}

void sub(int a, int b) {
	static int ssub = 1;

	printf("������ �� %d�� ȣ��Ǿ����ϴ�.\n", ssub++);
	printf("���� ��� : %d\n", a - b);
}

void mul(int a, int b) {
	static int smul = 1;

	printf("������ �� %d�� ȣ��Ǿ����ϴ�.\n", smul++);
	printf("���� ��� : %d\n", a*b);
}

void div(int a, int b) {
	static int sdiv = 1;

	printf("�������� �� %d�� ȣ��Ǿ����ϴ�.\n", sdiv++);
	printf("���� ��� : %d\n", a / b);
}