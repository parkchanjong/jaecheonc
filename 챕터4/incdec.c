#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int x, y;		// ���� x, y�� �����Ѵ�. 

	x = 1;		// x�� 1�̴�.
	y = ++x;    		// x�� 2�̰� y�� 2�̴�. 
	printf("x=%d  y=%d \n", x, y);

	y = x++;    		// x�� 3�̰� y�� 2�̴�. 
	printf("x=%d  y=%d \n", x, y);


	system("PAUSE");
	return 0;
}
