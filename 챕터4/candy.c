#include <stdio.h>
#include <stdlib.h>


int main(void) {



	int money;
	int candy_price;

	printf("현재 가지고 있는 돈: ");
	scanf_s("%d", &money);
	printf("캔디의 가격: ");
	scanf_s("%d", &candy_price);

	// 최대한 살 수 있는 사탕 수 
	int n_candies = money / candy_price;
	printf("최대로 살 수 있는 캔디의 개수=%d \n", n_candies);

	// 사탕을 구입하고 남은 돈
	int change = money % candy_price;
	printf("캔디 구입 후 남은 돈=%d \n", change);





	system("PAUSE");
	return 0;
}
