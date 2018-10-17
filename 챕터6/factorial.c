// 반복을 이용한 팩토리얼 구하기

#include <stdio.h>





int main(void) {




	long fact = 1;
	int i, n;

	printf("정수를 입력하시요: ");
	scanf_s("%d", &n);

	for (i = n; i >= 1; i--)
		fact = fact * i;

	printf("%d!은 %d입니다.\n", n, fact);




	system("PAUSE");

}
