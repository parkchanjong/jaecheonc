#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>



int main(void)
{


	char key[] = "사과";
	char buffer[80];

	do {
		printf("내가 제일 좋아하는 과일은?");
		scanf_s("%s", buffer);
	} while (strcmp(key, buffer) != 0);

	printf("맞았습니다!!!");




	printf("\n");
	system("PAUSE");
}
