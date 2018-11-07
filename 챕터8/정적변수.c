#include <stdio.h>


void sub(void);


int main(void)
{
	int i;
	for (i = 0; i < 5; i++)
		sub();



	printf("\n");
	system("PAUSE");
}

void sub(void)
{
	int count = 0;
	static int total = 0;		//함수내에서만 처리할때 사용

	count++;
	total++;
	printf(" count=%d\n", count);
	printf(" total=%d\n", total);
	printf("\n");
}