
#include <stdio.h>





int main(void) {




	int i, k;
	for (i = 1; i <= 9; i++) {
		for (k = 1; k <= 9; k++) {
			printf("%d X %d = %d \n", i, k, i*k);
		}
	}




	system("PAUSE");

}