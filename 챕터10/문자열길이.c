#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>



int main(void)
{


	char str[] = "A barking dog never bites";
	int i = 0, n = 0;
	while (str[n] != 0)
		n++;
	printf("문자열\"%s\"의 길이는 %d입니다.\n", str, n);


	for (i = 0; i <= n; i++)
		printf("\t\nstr[%2d] : %c ", i, str[i]);


	printf("\n");
	system("PAUSE");
}
