
#include <stdio.h>






int main(void) {


	int x, y;


	printf("���� 2�� �Է� : ");
	scanf_s("%d %d", &x, &y);

	printf("�μ��� �� : %d\n", x + y);
	if (x > y)
		printf("�μ��� �� : %d\n", x - y);
	else
		printf("�μ��� �� : %d\n", y - x);









	system("PAUSE");

}