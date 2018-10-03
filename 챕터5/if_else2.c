#include <stdio.h>


int main(void) {



	int num;

	printf("정수를 입력하시오:");
	scanf_s("%d", &num);


	printf("\n\t |%d| = ", num);
	if (num < 0)
		num = num * (-1);
	printf("%d\n\n", num);

	if (num % 2 == 0)
		printf("\t%d는 짝수\n\n", num);
	else				// 그렇지 않으면 홀수이다. 
		printf("입력된 정수는 홀수입니다.\n");



	system("PAUSE");
	return 0;
}
