#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>



int main(void)
{


	char key[] = "���";
	char buffer[80];

	do {
		printf("���� ���� �����ϴ� ������?");
		scanf_s("%s", buffer);
	} while (strcmp(key, buffer) != 0);

	printf("�¾ҽ��ϴ�!!!");




	printf("\n");
	system("PAUSE");
}
