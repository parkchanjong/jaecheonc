#include <stdio.h>

int main(void) {

	int a = 10;
	int b = 20;
	int c = 30;
	int d = 3;
	int result;

	result = a + b * c / d;
	printf("���갪: %d\n", result);

	result = (a + b) * c / d;
	printf("���갪: %d\n", result);

	result = a = b = 1;
	printf("���갪: %d\n", result);

	return 0;
}
