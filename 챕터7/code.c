
#include <stdio.h>
#define SIZE 26		//설정값은 프로그램 내부에서 바꿀수 없다





int main(void) {


	int i;
	char codes[SIZE];

	for (i = 0; i < SIZE; i++)
		codes[i] = 'A' + i;			// ‘a'에 1을 더하면 ’b'가 된다. 

	for (i = 0; i < SIZE; i++)
		printf("%c ", codes[i]);   //문자 %c 출력
	codes[SIZE - 1] = 0;
	printf("\n");

	printf("\n\t%s\n\n", codes);			//문자열  %s 출력

	printf("\n");



	system("PAUSE");

}