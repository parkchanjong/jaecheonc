#include <stdio.h>





int main(void) {




	int i = 5, n=i;
	long long factorial = 1;

	while (i >= 1)
	{
		factorial *= i--;
		//i--;
	}
	printf("%d! = %lld  \n",n, factorial);


	system("PAUSE");
	
}
