#include <stdio.h>




int main(void) {





	int month, days;

	printf("�ϼ��� �˰� ���� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &month);

	switch (month)
	{
	case 2:
		days = 28;
		break;

	case 4:	case 6:	case 9:	case 11:
		days = 30;
		break;
	default:
		days = 31;
		break;
	}
	printf("%d���� �ϼ��� %d�Դϴ�.\n", month, days);





	system("PAUSE");

}
