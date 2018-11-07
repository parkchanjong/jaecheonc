#include <stdio.h>
//지역 변수의 사용 범위


void sub1()
{
	int x = 100; //x는 이함수에서만 사용 가능
	printf("[1] x = %d\n", x);
}

int main(void)
{
	int x = 500, y = 200;
	sub1();
	printf("[2] x = %d\n", x); // x는 사용불가
	printf("[3] y = %d\n", y);


	printf("\n");
	system("PAUSE");


}
