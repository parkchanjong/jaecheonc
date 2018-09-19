#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char c;
	//int c;

	printf("문자를 입력하시오: ");
	scanf_s("%c", &c, 1);  //보안상 문자를 사용할때 뒤에 문자 길이를 쓴다
	//scanf_s("%c", &c, );

	printf("입력된 문자는 %c =%d 입니다\n", c, c);
	printf("\n\t 7 = %c : '7' = %c \n", 7, '7');
	printf("\n\t 7 = %d : '7' = %d \n", 7, '7');//숫자를 출력하는냐 아스키코드 값을 출력하는냐



	system("PAUSE");
	return 0;
}