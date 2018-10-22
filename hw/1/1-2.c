#include <stdio.h>





int main(void) {

	int val;

	printf("세 자리 정수 입력 : ");
	scanf_s("%d", &val);

	printf("100의 자리의 수 : %d \n", val / 100);
	val = val % 100;
	printf("10의 자리의 수 : %d \n", val / 10);
	val = val % 10;
	printf("1의 자리의 수 : %d \n", val);





	system("PAUSE");

}
