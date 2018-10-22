
#include <stdio.h>





int main(void) {



	double a = 5, b = 4, c = 7, p = 3, q = 4, r = 9;

	/*
	ax+by=c
	px+qy=r
	*/

	b = b / a;
	c = c / a;
	a = a / a;

	q = q - p * b;
	r = r - p * c;
	p = p - p * a;



	r = r / q;
	p = p / q;
	q = q / q;






	a = a - b * p;
	c = c - b * r;
	b = b - b * q;





	printf("a= %f \t b= %f \t c= %f \n", a, b, c);
	printf("p= %f \t q= %f \t r= %f \n", p, q, r);



	system("PAUSE");

}