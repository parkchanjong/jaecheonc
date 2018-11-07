
#include <stdio.h>
#define ROW 2
#define COL 2
int A[ROW][COL] = { 1,3,2,3,1,3 };
int B[COL][ROW] = { 4,3,1,2,3,1 };
int C[ROW][COL] = { 0 };



int main(void) {

	int i, j, k;


	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%4d", A[i][j]);
		printf("\n");
	}
	printf("\n-----------------------------------\n");


	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%4d", B[i][j]);
		printf("\n");
	}
	printf("\n-----------------------------------\n");




	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < ROW; j++)
			for (k = 0; k < COL; k++)
				C[i][j] = C[i][j] + A[i][k] * B[k][i];
	}

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < ROW; j++)
			printf("%4d", C[i][j]);
		printf("\n");
	}


	system("PAUSE");

}