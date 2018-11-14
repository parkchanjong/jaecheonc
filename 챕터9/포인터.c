#include <stdio.h>

int main(void)
{
	int number = 10, A = 100;
	int *p;

	p = &number;

	printf("변수 number의 주소 = %u\n", &number);
	printf("포인터의 값 = %u\n", p);
	printf("변수 number의 값 = %d\n", number);
	printf("포인터가 가리키는 값 = %d\n", *p);

	*p = 20;
	printf("변수 number의 값 = %d\n", number);
	printf("포인터가 가리키는 값 = %d\n", *p);

	p = &A;
	printf("포인터가 가리키는 값 = %d\n", *p);

	system("PAUSE");
}
