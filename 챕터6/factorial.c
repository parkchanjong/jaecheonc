// �ݺ��� �̿��� ���丮�� ���ϱ�

#include <stdio.h>





int main(void) {




	long fact = 1;
	int i, n;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	for (i = n; i >= 1; i--)
		fact = fact * i;

	printf("%d!�� %d�Դϴ�.\n", n, fact);




	system("PAUSE");

}
