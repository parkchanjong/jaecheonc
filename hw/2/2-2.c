
#include <stdio.h>






int main(void) {


	int x, y;


	printf("정수 2개 입력 : ");
	scanf_s("%d %d", &x, &y);

	printf("두수의 합 : %d\n", x + y);
	if (x > y)
		printf("두수의 차 : %d\n", x - y);
	else
		printf("두수의 차 : %d\n", y - x);









	system("PAUSE");

}