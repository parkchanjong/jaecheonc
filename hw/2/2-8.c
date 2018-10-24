
#include <stdio.h>






int main(void) {


	int a, x, y, sum = 0;
	printf("작은수(X)와 큰 수(Y)를 차례로 입력 : ");
	scanf_s("%d %d", &x, &y);

	for (a = x; a <= y; a++) {
		if (a % 2 == 0)
			sum += a;

	}

	printf("짝수의 합 SUM : %d\n", sum);



	system("PAUSE");

}