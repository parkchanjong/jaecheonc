#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>



int main(void) {

	srand(time(NULL));
	printf("���� ������ ������ �����մϴ�.\n");

	int coin = rand() % 2;

	if (coin == 0)
		printf("%d �ո��Դϴ�.\n", coin);
	else
		printf("%d �޸��Դϴ�.\n", coin);



	system("PAUSE");
	return 0;
}
