#include <stdio.h>

void print_name()
{
	printf("****************************\n");
	printf("�ѱ����б� ��ǻ�� ���а� \n");
	printf("ȫ�浿 \n");
	printf("****************************\n");
}

int main(void)
{
	int i;
	for (i = 0; i < 3; i++)
		print_name();

	system("PAUSE");
}
