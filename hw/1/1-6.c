
#include <stdio.h>






int main(void) {


	int a, ag, b, bg, c, cg;


	printf("A�� ���Կ� �ܰ� �Է� : ");
	scanf_s("%d %d", &ag, &a);
	printf("B�� ���Կ� �ܰ� �Է� : ");
	scanf_s("%d %d", &bg, &b);

	cg = ag + bg;
	c = (a * ag + b * bg) / cg;

	printf("c�� �ܰ� : %d\n", c);






	system("PAUSE");

}