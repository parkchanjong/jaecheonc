#include <stdio.h>


int main(void) {



	int number;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &number);

	if (number >= 0 && number <= 100)
		printf("입력한 정수가 0에서 100 사이에 있습니다. \n");
	else
		printf("입력한 정수가 0에서 100 사이가 아닙니다. \n");



	system("PAUSE");
	return 0;
}
