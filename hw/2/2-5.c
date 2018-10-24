
#include <stdio.h>






int main(void) {


	int i, k;

	for (i = 1; i <= 6; i++)
	{
		for (k = 1; k <= 6; k++)
		{

			if (k <= i)
				printf("%d", k);

			if (k >= i)
				printf("*");

		}
		printf("\n");
	}









	system("PAUSE");

}