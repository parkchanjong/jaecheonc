#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>



int main(void) {

	srand(time(NULL));
	printf("동전 던지기 게임을 시작합니다.\n");

	int coin = rand() % 2;

	if (coin == 0)
		printf("%d 앞면입니다.\n", coin);
	else
		printf("%d 뒷면입니다.\n", coin);



	system("PAUSE");
	return 0;
}
