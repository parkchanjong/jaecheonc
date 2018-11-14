#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define MAX 45

void get_Random(int n);

int main(void)
{
	int i;

	srand((unsigned)time(NULL));
	get_Random(10);

	system("PAUSE");
}

void get_Random(int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("   %4d \n", 1 + rand() % MAX);
}