#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define MAX 45
#define SIZE 10



int main(void)
{
	int i, min, max, sum = 0;
	int A[100];

	srand((unsigned)time(NULL));

	printf(" �迭�� ���Ҵ�  \n");
	for (i = 0; i < SIZE; i++)
	{
		A[i] = 1 + rand() % MAX;

		printf("   %4d \n", A[i]);
	}
	min = A[0];
	max = A[0];
	for (i = 1; i < SIZE; i++)
	{
		if (A[i] < min)
		{
			min = A[i];
		}
		else if (A[i] > max)
		{
			max = A[i];
		}
	}
	printf(" ū���� %d, �������� %d  \n", max, min);
	for (i = 0; i < SIZE; i++)
	{
		sum += A[i];
	}
	printf(" ���� %d\n", sum);

	system("PAUSE");
}

