#include <stdio.h>

int modify(int    value)
{
	value = 99;
	return value;
}

int main(void)
{
	int number = 1;

	modify(number);	//1�� �Ѿ� ����
	printf("number = %d\n", number);


	number = modify(number);	//1�� �Ѿ� ����
	printf("number = %d\n", number);

	system("PAUSE");
}
