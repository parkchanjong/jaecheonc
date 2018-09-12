#include<stdio.h>
#include <stdlib.h>//헤더파일

int main(void)     //y = f(x)  와 같은것    return 0은  y가 int형
{
	int x = 100, y = 200, sum;			//inter정수형   변수선언함 - 정수형, 이름은x						한줄에 적어도 상관없다
	//초기화 하는값 Initialize         반대는- 터미널	



	//x = 100;   //베리어블  언제든 변할수 있음


	sum = x + y;
	printf("두수의 합 = %d \n", sum);
	printf("%d + %d = %d\n", x, y, sum);	//sum 대신에 x+y를 적어도 상관없다				정수는 %d로 해야한다


	return 0;    //잘 종료했다고 알림 
	system("PAUSE");

}