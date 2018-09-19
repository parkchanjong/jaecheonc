#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main(void)
{
	double radios;
	double area;

	printf("원의 반지름을 입력하시요: ");
	scanf_s("%lf", &radios);

	area = PI * radios * radios;
	printf("원의 면적: %f \n", area);
	system("PAUSE");
	return 0;
}