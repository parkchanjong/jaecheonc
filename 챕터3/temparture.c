#include<stdio.h>

int main(void)
{
	double celsius, fahrenheit;

	printf("È­¾¾¿Âµµ=");
	scanf("%f",&fahrenheit);

	celsius = (fahrenheit - 32.0) *5.0 / 9.0;
	printf("¼·¾¾¿Âµµ=%lf \n", celsius);

	return 0;
}