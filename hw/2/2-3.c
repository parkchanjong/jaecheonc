
#include <stdio.h>






int main(void) {


	int a, b, c;



	printf("�ﰢ���� ������  �Է� : ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a < 0 || b < 0 || c < 0) {
		printf("0(����)�� �ԷµǾ� �����մϴ�.\n");
		system("PAUSE");
	}

	while (1) {
		printf("�ﰢ���� ������  �Է� : ");
		scanf_s("%d %d %d", &a, &b, &c);
		if (a + b <= c || a + c <= b || b + c <= a)
			printf("�ﰢ���� ����� �����ϴ�\n");
		continue;
		if (a + b > c || a + c > b || b + c > a)
			break;
	}



	if (a == b && b == c)
		printf("���ﰢ��\n");
	else if (a == b || a == c || b == c)
		printf("�̵ �ﰢ��\n");
	else
		printf("�Ϲݻﰢ��\n");








	system("PAUSE");

}