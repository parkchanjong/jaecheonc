
#include <stdio.h>





int main(void) {


	double D1, D2, S;
	int D;

	printf("�Ǽ� 2�� �Է� : ");
	scanf_s("%lf %lf", &D1, &D2);

	S = D1 + D2;

	printf("\n%lf", S);

	D = (int)D1 + (int)D2;
	printf("\n%d", D);




	system("PAUSE");

}