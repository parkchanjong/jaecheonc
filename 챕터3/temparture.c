#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double celsius, fahrenheit;

	printf("ȭ���µ�=");
	scanf_s("%f", &fahrenheit);

	celsius = (fahrenheit - 32.0) *5.0 / 9.0;
	printf("�����µ�=%lf \n", celsius);
	system("PAUSE");
	return 0;
}