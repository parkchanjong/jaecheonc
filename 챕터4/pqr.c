#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {



	double a = 5, b = 4, c = 7, p = 3, q = 4, r = 9;

	b = b / a;
	c = c / a;
	a = a / a;		//������ a�� ����ϱ� ������ ���� �������� ���ش�

	q = q - p * b;
	r = r - p * c;					//  (1 b c)
	p = p - p * a;					//  (0 q r)			q 1����� b�� 0�����ߵȴ�


	a = a - b * a;
	c = c - b * c;
	b = b - b * p;

	r = r / q;
	p = p / q;
	q = q / q;

	printf("%f %f %f", a, b, c);
	printf("%f %f %f", p, q, r);
	//x=-1   y=3



	system("PAUSE");
	return 0;
}
