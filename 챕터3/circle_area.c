#include<stdio.h>
#define PI	3.141592

int main(void)
{
	double radios;
	double area;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &radios);

	area = PI * radios * radios;
	printf("���� ����: %f \n", area);

	return 0;
}