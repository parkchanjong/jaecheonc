#include <stdio.h>
#include <math.h>

void dist_2d(double x1, double y1, double x2, double y2);

int main(void) {
	double x1, x2, y1, y2;

	printf("ù��° ���� ��ǥ�� �Է��Ͻÿ�:(x, y)");
	scanf_s("%lf %lf", &x1, &y1);
	printf("�ι�° ���� ��ǥ�� �Է��Ͻÿ�:(x, y)");
	scanf_s("%lf %lf", &x2, &y2);

	dist_2d(x1, y1, x2, y2);

	printf("\n");
	system("PAUSE");
}

void dist_2d(double x1, double y1, double x2, double y2) {
	double dist = 0;

	dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

	printf("���� ������ �Ÿ��� %lf�Դϴ�.", dist);
}