
#include <stdio.h>






int main(void) {


	int a, x, y, sum = 0;
	printf("������(X)�� ū ��(Y)�� ���ʷ� �Է� : ");
	scanf_s("%d %d", &x, &y);

	for (a = x; a <= y; a++) {
		if (a % 2 == 0)
			sum += a;

	}

	printf("¦���� �� SUM : %d\n", sum);



	system("PAUSE");

}