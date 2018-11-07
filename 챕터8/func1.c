#include <stdio.h>

/*
반환형: int
함수이름 : get_integer
매개 변수 : 없음
*/
int get_integer();		//함수 선언문, 함수프로토타입


int main(void)
{



	int x = get_integer();	// 함수를 호출한다. 
	int y = get_integer();	// 함수를 호출한다. 
	int result = x + y;
	printf("두수의 합 = %d \n", result);





	system("PAUSE");
	return 0;
}
int get_integer()
{
	int value;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &value);
	return value;
}