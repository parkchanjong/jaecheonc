#include <stdio.h>

enum days {mon,tue,wed,thu,fri,sat,sun};

char *days_name[] = {
"��","ȭ","��","��","��","��","��"};

int main(void)
{
	enum days d;

	for(d=mon;d<=sun;d++)
		printf("%d���� ������ %s���� �Դϴ�\n",d,days_name[d]);



	printf("\n");
	system("PAUSE");
}

