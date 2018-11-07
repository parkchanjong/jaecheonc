#define SWAP(x,y,t) ((t =x),(x=y),(y=t))
#include <stdio.h>

void swap(int x, int y);

int main() {
	int x = 200, y = 500;
	printf("[1] 함수 호출전 x = %d : y = %d\n", x, y);

	swap(x, y);//값만 가지고 호출  -> 지역변수 값이 바뀌는건 아님
	printf("[2] 함수 호출후 x = %d : y = %d\n", x, y);

	printf("\n");
	system("PAUSE");

}

void swap(int x, int y) {
	int t;
	SWAP(x, y, t);
	printf("[3] 함수 호출후 x = %d : y = %d\n", x, y);
}