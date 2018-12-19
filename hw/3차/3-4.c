#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define MAX 10
#define SIZE 100



int main(void)
{
	int i, k, cout[10] = { 0, };
	int A[SIZE];

	srand((unsigned)time(NULL));

	printf(" 0~9 까지 난수 100번 생성  \n");
	for (i = 0; i < SIZE; i++)
	{
		A[i] = rand() % MAX;

		printf("   %4d \n", A[i]);
	}

	for (i = 0; i < MAX; i++) {
		for (k = 0; k < SIZE; k++) {
			if (A[k] == i)
				cout[i]++;
		}
	}


	for (i = 0; i < MAX; i++) {
		printf(" %2d", cout[i]);
	}

	printf("\n");
	system("PAUSE");
}

