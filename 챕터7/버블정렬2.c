
#include <stdio.h>
#define SIZE 10

#define SWAP(x,y,t) ( (t)=(x), (x)=(y), (y)=(t) ) //변수 교환



int main(void) {



	int i, k, tmp;
	int A[SIZE] = { 16, 7, 9, 1, 3 ,11,77,99,22,33 };

	// 배열의 요소를 정렬한다. 
	for (k = 0; k < SIZE; k++) {
		for (i = 0; i < SIZE - 1; i++) {
			if (A[i] > A[i + 1]) {	// 크기 순이 아니면

				SWAP(A[i], A[i + 1], tmp); // 서로 교환한다.
			}
		}
	}

	// 배열의 요소를 출력한다. 
	for (i = 0; i < SIZE; i++) {
		printf("%3d ", A[i]);
	}




	system("PAUSE");

}