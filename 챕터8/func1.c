#include <stdio.h>

/*
��ȯ��: int
�Լ��̸� : get_integer
�Ű� ���� : ����
*/
int get_integer();		//�Լ� ����, �Լ�������Ÿ��


int main(void)
{



	int x = get_integer();	// �Լ��� ȣ���Ѵ�. 
	int y = get_integer();	// �Լ��� ȣ���Ѵ�. 
	int result = x + y;
	printf("�μ��� �� = %d \n", result);





	system("PAUSE");
	return 0;
}
int get_integer()
{
	int value;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &value);
	return value;
}