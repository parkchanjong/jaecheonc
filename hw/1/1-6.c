
#include <stdio.h>






int main(void) {


	int a, ag, b, bg, c, cg;


	printf("A의 무게와 단가 입력 : ");
	scanf_s("%d %d", &ag, &a);
	printf("B의 무게와 단가 입력 : ");
	scanf_s("%d %d", &bg, &b);

	cg = ag + bg;
	c = (a * ag + b * bg) / cg;

	printf("c의 단가 : %d\n", c);






	system("PAUSE");

}