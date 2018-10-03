#include <stdio.h>


int main(void) {



	int x, y;

	printf("첫번째 수=");
	scanf_s("%d", &x);
	printf("두번째 수=");
	scanf_s("%d", &y);

	printf("큰수=%d \n", (x > y) ? x : y);
	printf("작은수=%d \n", (x < y) ? x : y);


	system("PAUSE");
	return 0;
}
