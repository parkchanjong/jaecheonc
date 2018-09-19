#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float fvalue = 1234567890.12345678901234567890;
	double dvalue = 1234567890.12345678901234567890, evalue = 1.2345e2;


	printf("float형 변수 = %30.25f\n", fvalue);
	printf("double형 변수 = %30.25f\n", dvalue);
	printf("e-float형 변수 = %30.25f\n", evalue);
	system("PAUSE");
	return 0;
}