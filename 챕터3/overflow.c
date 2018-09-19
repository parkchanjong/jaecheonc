#include<stdio.h>
#include <stdlib.h>//헤더파일


int main(void)
{
	short w;
	int x;
	unsigned short y;

	printf("\tw의 최소값 = %d\t : 최대값 = %d \n", SHRT_MIN, SHRT_MAX);
	printf("\tx의 최소값 = %d\t : 최대값 = %d \n", INT_MIN, INT_MAX);

	w = 32767 + 1;
	y = 32767 + 1;
	x = INT_MAX + 101;
	printf("\n\t  w = %d : y = %d\n", w, y);
	printf("\n\t  x = %d\n", x);

	w = w - 1;
	y = 65535 + 1;
	printf("\n\t  w =  %d : y %d\n", w, y);

	printf("\n");

	system("PAUSE");

		return 0;
}