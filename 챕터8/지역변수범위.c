#include <stdio.h>
//���� ������ ��� ����


void sub1()
{
	int x = 100; //x�� ���Լ������� ��� ����
	printf("[1] x = %d\n", x);
}

int main(void)
{
	int x = 500, y = 200;
	sub1();
	printf("[2] x = %d\n", x); // x�� ���Ұ�
	printf("[3] y = %d\n", y);


	printf("\n");
	system("PAUSE");


}
