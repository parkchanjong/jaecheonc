#include <stdio.h>
#include <math.h>

int recurse(int);

int main(void) {
	int num;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	printf("%d\n", recurse(num));

	printf("\n");
	system("PAUSE");
}

int recurse(int a) {
	if (a != 1)
		return pow(a, 3) + recurse(a - 1);
	return 1;
}