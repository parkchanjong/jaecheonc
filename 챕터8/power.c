#include <stdio.h>

// �Լ��� �����Ѵ�. 
int get_integer()
{
	int value;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &value);
	return value;
}
void power()   //���ϰ�����!
{
	int i;
	long result = 1;

	int x = get_integer();
	int y = get_integer();

	for (i = 0; i < y; i++)
		result *= x;
	printf("%d�� %d�� = %d \n", x, y, result);


}


int main(void)
{
	power();

	system("PAUSE");
	return 0;
}
