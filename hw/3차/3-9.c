#include <stdio.h>

void show_digit(int x);

int main(void) {
	int num;

	while (1) {
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d", &num);

		if (num < 0) break;

		show_digit(num);
		printf("\n");
	}

	printf("\n");
	system("PAUSE");
}

void show_digit(int x) {
	if (x > 0) {
		show_digit(x / 10);
		printf("%d ", x % 10);
	}
}