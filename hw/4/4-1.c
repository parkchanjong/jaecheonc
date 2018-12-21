#include<stdio.h>
#include<string.h>
#include<conio.h>


int main(void) {
	char password[4];
	char str[] = { "1234" };
	while (1) {
		printf("비밀번호를 입력하시오:");
		for (int i = 0; i < 4; i++)
		{
			password[i] = getch();
			putch('*');
		}
		printf("\n");
		int result = strcmp(password, str);
		if (result == 0) {
			printf("비밀번호 일치");
			break;
		}
		else
			printf("비밀번호가 일치하지 않습니다.\n");
	} return 0;
}
