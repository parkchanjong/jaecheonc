#include <stdio.h>

void modify(int *ptr)
{
	*ptr = 99;		// �Ű� ������ ���Ͽ� ������ �����Ѵ�. 
}

int main(void)
{
	int number = 1;
	
	modify(&number);	// �ּҸ� ����ؼ� ������. 
	printf("number = %d\n", number);

	system("PAUSE");
}
