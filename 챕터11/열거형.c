#include <stdio.h>

enum days {mon,tue,wed,thu,fri,sat,sun};

char *days_name[] = {
"월","화","수","목","금","토","일"};

int main(void)
{
	enum days d;

	for(d=mon;d<=sun;d++)
		printf("%d번쨰 요일은 %s요일 입니다\n",d,days_name[d]);



	printf("\n");
	system("PAUSE");
}

