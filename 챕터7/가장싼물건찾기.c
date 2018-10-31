
#include <stdio.h>
#define SIZE 10





int main(void) {

	int prices[SIZE] = { 12, 3, 19, 6, 18, 8, 12, 4, 1, 19 };
	int i, minimum;
	printf("[ ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", prices[i]);
	}
	printf("]\n");

	minimum = prices[0];		//첫최소값을 첫배열로
	for (i = 1; i < SIZE; i++)	//i=0으로 하면 1번더 비교한다
	{
		if (prices[i] < minimum)		//min보다 작으면 바꿈    비교=9  교환=2번
			minimum = prices[i];
	}
	printf("최소값은 %d입니다.\n", minimum);


	system("PAUSE");

}