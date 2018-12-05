#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>


int main(void)
{


	int i;
	char menu[5][10] = {
	"init",
	"open",
	"close",
	"read",
	"write"
	};
	for (i = 0; i < 5; i++)
		printf("%d 번째 메뉴: %s \n", i, menu[i]);





	printf("\n");
	system("PAUSE");
}
