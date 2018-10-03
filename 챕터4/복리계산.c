#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {


	int init_money = 24;
	double interest = 0.06;
	int years = 382;

	double money = init_money * pow((1.0 + interest), years);

	printf("%d년 후의 원리금=%f \n", years, money);




	system("PAUSE");
	return 0;
}
