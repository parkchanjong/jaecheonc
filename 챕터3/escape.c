#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int id, pass;
	printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ���:\n");
	printf("id: ____\b\b\b\b");
	scanf_s("%d", &id);
	printf("pass: ____\b\b\b\b");
	scanf_s("%d", &pass);
	printf("\a�Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�.\n", id, pass);


	system("PAUSE");
	return 0;
}