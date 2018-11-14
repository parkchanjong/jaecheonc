#define SWAP(a,b,t) ((t =a),(a=b),(b=t))
#include <stdio.h>

void swap(int *px, int *py);

int main() {
	int a = 200, b = 500;
	printf("[1] 함수 호출전 a = %d : b = %d\n", a, b);

	swap(&a, &b);
	printf("[2] 함수 호출후 a = %d : b = %d\n", a, b);

	printf("\n");
	system("PAUSE");

}

void swap(int *px, int *py) {
	int tmp;
	SWAP(*px, *py, tmp);
	printf("[3] 함수 호출후 a = %d : b = %d\n", *px, *py);
}