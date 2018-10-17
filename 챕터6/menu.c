// do..while 문을 이용한 메뉴 
// while 문을 이용한 최대 공약수 구하기 프로그램 
/*최대 공약수 GCD 구하기 : Euclid 알고리즘
큰수와 작은수의 최대 공약수는 작은수와 (큰수~작은수)의 최대 공약수와 같다
작은수와 (큰수를 작은수로 나눈 나머지)의 최대 공약수와 같다*/
#include <stdio.h>





int main(void) {




	int i = 0;
	do
	{
		printf("1---새로만들기\n");
		printf("2---파일열기\n");
		printf("3---파일닫기\n");
		printf("하나를 선택하시요.\n");
		scanf_s("%d", &i);
	} while (i < 1 || i > 3);

	printf("선택된 메뉴=%d\n", i);




	system("PAUSE");

}