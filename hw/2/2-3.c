
#include <stdio.h>






int main(void) {


	int a = 0, b = 0, c = 0;


	for (;;) {


		printf("삼각형의 세변을  입력 : ");
		scanf_s("%d %d %d", &a, &b, &c);


		if (a < 0 || b < 0 || c < 0)
			printf("0(음수)가 입력되어 종료합니다.\n");
		break;

		if (a + b <= c || a + c <= b || b + c <= a)
			printf("삼각형을 만들수 없습니다\n");
		continue;



		if (a == b && b == c)
			printf("정삼각형\n");
		break;

		if (a == b || a == c || b == c)
			printf("이등변 삼각형\n");
		break;

		if (a + b > c || a + c > b || b + c > a)
			printf("일반삼각형\n");
		break;
	}




	system("PAUSE");

}