#include<stdio.h>
#include <stdlib.h>//�������

int main(void)
{
	int x;			
	int y;
	int result;

	printf("���� 2�� �Է�:");
	scanf_s("%d%d", &x,&y);		//���⳪ ���� ���� �д´�

	result = x + y;
	printf("�μ��� ��= %d \n",result);
	result = x - y;
	printf("�μ��� ��= %d \n", result);
	result = x * y;
	printf("�μ��� ��= %d \n", result);
	result = x / y;
	printf("�μ��� ��= %d \n", result);


	return 0;
	system("PAUSE");

}