#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>



int main(void)
{


	char name[100];
	char address[100];
	printf("�̸��� �Է��Ͻÿ�: ");
	gets(name);
	puts(name);

	printf("���� �����ϴ� �ּҸ� �Է��Ͻÿ�: ");
	gets(address);
	puts(address);


	printf("�ȳ��ϼ��� %s����� %s ��\n", address, name);


	printf("\n");
	system("PAUSE");
}
