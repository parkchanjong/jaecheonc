#include<stdio.h>
#include<string.h>
#include<conio.h>


int main(void) {
	char password[4];
	char str[] = { "1234" };
	while (1) {
		printf("��й�ȣ�� �Է��Ͻÿ�:");
		for (int i = 0; i < 4; i++)
		{
			password[i] = getch();
			putch('*');
		}
		printf("\n");
		int result = strcmp(password, str);
		if (result == 0) {
			printf("��й�ȣ ��ġ");
			break;
		}
		else
			printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n");
	} return 0;
}
