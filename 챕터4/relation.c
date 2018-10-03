#include <stdio.h>
#include <stdlib.h>


int main(void) {



	int x, y;

	printf("두개의 정수를 입력하시오: ");
	scanf_s("%d%d", &x, &y);

	printf("%d == %d의 결과값: %d\n", x, y, x == y);
	printf("%d != %d의 결과값: %d\n", x, y, x != y);
	printf("%d > %d의 결과값: %d\n", x, y, x > y);
	printf("%d < %d의 결과값: %d\n", x, y, x < y);
	printf("%d >= %d의 결과값: %d\n", x, y, x >= y);
	printf("%d <= %d의 결과값: %d\n", x, y, x <= y);




	system("PAUSE");
	return 0;
}
