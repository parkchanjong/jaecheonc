#include<stdio.h>
#include <stdlib.h>//헤더파일

int main(void)   
{
	short a;
	int b;
	long long int c;
	float d;
	double e;
	long double f;
	char g;



	printf("    short : %x :  %d \n", &a, sizeof(a));
	printf("      int : %x :  %d \n", &b, sizeof(b));
	printf("    L int : %x :  %d \n", &c, sizeof(c));
	printf("    float : %x :  %d \n", &d, sizeof(d));
	printf("   double : %x :  %d \n", &e, sizeof(e));
	printf(" L double : %x :  %d \n", &f, sizeof(f));
	printf("     char : %x :  %d \n", &g, sizeof(g));
	


	return 0;    
	system("PAUSE");

}