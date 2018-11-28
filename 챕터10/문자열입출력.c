#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>



int main(void)
{


	int ch;
	while (1)
	{
		ch = getchar();
		if (ch == 'q') break;
		putchar(ch);
	}


	printf("\n");
	system("PAUSE");
}
