
#include <stdio.h>
#define SIZE 5			//c컴파일러와 프로그램어  정의     -->전처리기





int main(void) {


	int i;
	int scores[SIZE];

	scores[0] = 10;
	scores[1] = 20;
	scores[2] = 30;
	scores[3] = 40;
	scores[4] = 50;

	for (i = 0; i < SIZE; i++)
		printf("scores[%d]=%d\n", i, scores[i]);




	system("PAUSE");

}