#include <stdio.h>

int main(void)
{
	int number = 10, A = 100;
	int *p;

	p = &number;

	printf("���� number�� �ּ� = %u\n", &number);
	printf("�������� �� = %u\n", p);
	printf("���� number�� �� = %d\n", number);
	printf("�����Ͱ� ����Ű�� �� = %d\n", *p);

	*p = 20;
	printf("���� number�� �� = %d\n", number);
	printf("�����Ͱ� ����Ű�� �� = %d\n", *p);

	p = &A;
	printf("�����Ͱ� ����Ű�� �� = %d\n", *p);

	system("PAUSE");
}
