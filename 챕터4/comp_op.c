#include <stdio.h>
#include <stdlib.h>


int main(void) {



	int x = 10, y = 10;
	printf("x = %d    y = %d \n", x, y);
	printf("x*y+1 이후 x = %d \n\n", x*y + 1);
	printf("x*=y+1 이후 x = %d \n\n", x *= y + 1);

	x += 1;
	printf("(x += 1)이후 x = %d \n", x);
	y *= 2;
	printf("(y *= 2)이후 y = %d \n", y);





	system("PAUSE");
	return 0;
}
