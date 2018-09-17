#include<stdio.h>

int main(void)
{
	float x = 1e39;
	float y = 1.23456e-46;

	printf("x=%e\n",x);
	printf("y=%e\n", y);
	return 0;
}