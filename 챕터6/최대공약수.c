// while 문을 이용한 최대 공약수 구하기 프로그램 
/*최대 공약수 GCD 구하기 : Euclid 알고리즘
큰수와 작은수의 최대 공약수는 작은수와 (큰수~작은수)의 최대 공약수와 같다
작은수와 (큰수를 작은수로 나눈 나머지)의 최대 공약수와 같다*/
#include <stdio.h>





int main(void) {




	int x, y, r;

	printf("두개의 정수를 입력하시오(큰수, 작은수): ");
	scanf_s("%d%d", &x, &y);

	while (y != 0)
	{
		r = x % y;    //r은 0~(y-1)
		x = y;
		y = r;			//y(작은수)가 0이 될때 큰수가 최대 공약수
		printf("\n\t x = %d \t  y = %d \n", x, y);

	}
	printf("\t 최대 공약수는 %d입니다.\n", x);




	system("PAUSE");

}