
#include <stdio.h>






int main(void) {


	int x, y, z, a = 0;
	printf("  ¹øÈ£    1g    2g   4g   \n");
	for (x = 0; x <= 20; x++) {
		for (y = 0; y <= 10; y++) {
			for (z = 0; z <= 5; z++) {
				if (x + (y * 2) + (z * 4) == 20) {
					a++;
					printf("[%3d] : ( %2d , %2d , %2d )\n", a, x, y, z);
				}
			}
		}
	}







	system("PAUSE");

}