
#include <stdio.h>





int main(void) {


	int x;

	double y, a;

	printf("정수 입력 : ");
	scanf_s("%d", &x);

	a = x - 2;
	y = (x*x*x - 3) / a;
	printf("\n%lf\n", y);


	system("PAUSE");

}