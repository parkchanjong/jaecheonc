#include <stdio.h>

int main(void)
{
	int a, b, c, largest;

	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c)		// a가 b보다 크고 a가 c보다 크면
		largest = a;
	else if (b > a && b > c)	// b가 a보다 크고 b가 c보다 크면
		largest = b;
	else			// 그렇지 않으면 c가 최대값인 것은 자명하다.
		largest = c;

	printf("가장 큰 정수는 %d이다. \n", largest);
	return 0;
}
