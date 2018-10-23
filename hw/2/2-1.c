
#include <stdio.h>






int main(void) {


	int color;


	printf("신호등 색깔 입력(R,G,Y) : ");
	color = getchar();

	if (color == 'r' || color == 'R')
		printf("정지 \n");
	else if (color == 'g' || color == 'G')
		printf("진행 \n");
	else
		printf("주의 \n");









	system("PAUSE");

}