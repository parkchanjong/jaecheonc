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

	printf(" �迭�� ���Ҵ�  \n");
	for (i = 0; i < SIZE; i++)
	{
		A[i] = 1 + rand() % MAX;

		printf("   %4d \n", A[i]);
	}

	//��������
	for (k = 0; k < SIZE; k++) {
		for (i = 0; i < SIZE - 1; i++) {
			if (A[i] > A[i + 1]) {	// ũ�� ���� �ƴϸ�

				SWAP(A[i], A[i + 1], tmp); // ���� ��ȯ�Ѵ�.
			}
		}
	}



	printf("\n ���� ������ ��������  \n");
	for (i = 0; i < SIZE; i++) {
		printf("   %4d \n", A[i]);
	}


	system("PAUSE");
}

