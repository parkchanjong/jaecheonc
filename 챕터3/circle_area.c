#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main(void)
{
	double radios;
	double area;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf_s("%lf", &radios);

	area = PI * radios * radios;
	printf("���� ����: %f \n", area);
	system("PAUSE");
	return 0;
}