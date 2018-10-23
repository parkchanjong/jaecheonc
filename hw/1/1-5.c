
#include <stdio.h>
#include <math.h>





int main(void) {


	int x1, y1, x2, y2;
	double D;

	printf("첫번째 점 : ");
	scanf_s("%d %d", &x1, &y1);
	printf("\n두번째 점 : ");
	scanf_s("%d %d", &x2, &y2);


	D = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

	printf("\n%lf", D);






	system("PAUSE");

}