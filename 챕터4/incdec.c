#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int x, y;		// 변수 x, y를 선언한다. 

	x = 1;		// x는 1이다.
	y = ++x;    		// x는 2이고 y는 2이다. 
	printf("x=%d  y=%d \n", x, y);

	y = x++;    		// x는 3이고 y는 2이다. 
	printf("x=%d  y=%d \n", x, y);


	system("PAUSE");
	return 0;
}
