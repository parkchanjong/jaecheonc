#include <stdio.h>


int main(void) {


	int year;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d���� �����Դϴ�.\n", year);
	else
		printf("%d���� ������ �ƴմϴ�.\n", year);



	system("PAUSE");
	return 0;
}
