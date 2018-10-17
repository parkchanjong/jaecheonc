#include <stdio.h>
int main(void)
{
	int i;
	for(i=0 ; i<10 ; i++)
		if( i%2 == 0 )
			continue;
		printf("Á¤¼ö: %d \n", i);
	
	return 0;
}
