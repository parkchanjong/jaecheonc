#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("���� ������ ������ �����մϴ�.\n");

	int coin = rand() % 2;
	if (coin == 0)
		printf("�ո��Դϴ�.\n");
	else
		printf("�޸��Դϴ�.\n");
	return 0;
}
