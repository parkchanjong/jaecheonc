
#include <stdio.h>





int main(void) {


	double D1, D2, S;
	int D;

	printf("실수 2개 입력 : ");
	scanf_s("%lf %lf", &D1, &D2);

	S = D1 + D2;

	printf("\n%lf", S);

	D = (int)D1 + (int)D2;
	printf("\n%d", D);




	system("PAUSE");

}