#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	int x, y, result;

	printf("�ΰ��� ���� �Է� : ");
	scanf_s("%d %d", &x,&y);

	result = x + y;
	printf("%d + %d = %d\n",x,y,result);
	result = x - y;
	printf("%d - %d = %d\n", x, y, result);
	result = x * y;
	printf("%d * %d = %d\n", x, y, result);
	result = x / y;
	printf("%d / %d = %d\n", x, y, result);
	result = x % y;
	printf("%d %% %d = %d\n", x, y, result);


	system("PAUSE");
	return 0;
}
