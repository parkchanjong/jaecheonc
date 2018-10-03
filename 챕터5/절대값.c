#include <stdio.h>


int main(void) {


	
	int num;

	printf("정수를 입력하시오:");
	scanf_s("%d", &num);


	printf("\n\t |%d| = ", num);
		if (num < 0)
			num = num * (-1);  //-1은 괄호로 묶어 줘야함
		printf("%d\n\n",num);

		if (num % 2 == 0)
			printf("\t%d는 짝수\n\n", num);




	system("PAUSE");
	return 0;
}
