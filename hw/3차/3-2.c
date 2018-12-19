#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define MAX 45
#define SIZE 10
#define SWAP(x,y,t) ( (t)=(x), (x)=(y), (y)=(t) )


int main(void)
{
	int i, k, tmp;
	int A[100];

	srand((unsigned)time(NULL));

	printf(" 배열의 원소는  \n");
	for (i = 0; i < SIZE; i++)
	{
		A[i] = 1 + rand() % MAX;

		printf("   %4d \n", A[i]);
	}

	//버블정렬
	for (k = 0; k < SIZE; k++) {
		for (i = 0; i < SIZE - 1; i++) {
			if (A[i] > A[i + 1]) {	// 크기 순이 아니면

				SWAP(A[i], A[i + 1], tmp); // 서로 교환한다.
			}
		}
	}



	printf("\n 버블 정렬후 오름차순  \n");
	for (i = 0; i < SIZE; i++) {
		printf("   %4d \n", A[i]);
	}


	system("PAUSE");
}

