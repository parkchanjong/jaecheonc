
#include <stdio.h>






int main(void) {


	int a = 0, b = 0, c = 0;


	for (;;) {


		printf("�ﰢ���� ������  �Է� : ");
		scanf_s("%d %d %d", &a, &b, &c);


		if (a < 0 || b < 0 || c < 0)
			printf("0(����)�� �ԷµǾ� �����մϴ�.\n");
		break;

		if (a + b <= c || a + c <= b || b + c <= a)
			printf("�ﰢ���� ����� �����ϴ�\n");
		continue;



		if (a == b && b == c)
			printf("���ﰢ��\n");
		break;

		if (a == b || a == c || b == c)
			printf("�̵ �ﰢ��\n");
		break;

		if (a + b > c || a + c > b || b + c > a)
			printf("�Ϲݻﰢ��\n");
		break;
	}




	system("PAUSE");

}