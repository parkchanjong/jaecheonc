#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>


#define SOL "apple"
int main(void)
{
	char s[100] = SOL;
	char ans[100];
	int i, len;

	len = strlen(s);
	for (i=0;i<len;i++) {
	int pos1 = rand() % len;
	int pos2 = rand() % len;
	char tem = s[pos1];
	s[pos1] = s[pos2];
	s[pos2] = tem;
	}

	do {
	printf("%s의 원래 단어를 맞춰보세요: ", s);
	scanf_s("%s",ans);
	}while (strcmp(ans,SOL) !=0 );
	printf("ㅊㅋㅊㅋ");

	



	printf("\n");
	system("PAUSE");
}
