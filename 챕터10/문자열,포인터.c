#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>



int main(void)
{

	
	char s[] = "helloworld";
	char *p = "helloworld";

	s[0] = 'h';

	printf("포인터가 가리키는 문장열 = %s \n",p);
	p = "goodbye";
	printf("포인터가 가리키는 문자열 %s \n",p);




	printf("\n");
	system("PAUSE");
}
