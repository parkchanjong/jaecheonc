
#include <stdio.h>






int main(void) {



	int i, j;
	// 3행과 5열을 가지는 2차원 배열 선언
	int a[3][5] = { { 0, 1, 2, 3, 4 }, { 0, 1, 2, 3, 4 }, { 0, 1, 2, 3, 4 } };

	// 각 배열 요소의 값을 출력한다. 
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("a[%d][%d] = %d ", i, j, a[i][j]);
		}
		printf("\n");
	}

	printf("\n\t");


	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("%2d", a[i][j]);
		}
		printf("\n\t");
	}

	printf("\n\t");


	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			printf("%2d", a[j][i]);
		}
		printf("\n\t");
	}


	system("PAUSE");

}