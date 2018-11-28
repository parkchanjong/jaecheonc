#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>



int main(void)
{


	char name[100];
	char address[100];
	printf("이름을 입력하시오: ");
	gets(name);
	puts(name);

	printf("현재 거주하는 주소를 입력하시오: ");
	gets(address);
	puts(address);


	printf("안녕하세요 %s에사는 %s 씨\n", address, name);


	printf("\n");
	system("PAUSE");
}
