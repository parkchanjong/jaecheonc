#include <stdio.h>

int main(void)
{
	int a, b, c, largest;

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c)		// a�� b���� ũ�� a�� c���� ũ��
		largest = a;
	else if (b > a && b > c)	// b�� a���� ũ�� b�� c���� ũ��
		largest = b;
	else			// �׷��� ������ c�� �ִ밪�� ���� �ڸ��ϴ�.
		largest = c;

	printf("���� ū ������ %d�̴�. \n", largest);
	return 0;
}
