#include <stdio.h>


int main(void) {


	
	int num;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &num);


	printf("\n\t |%d| = ", num);
		if (num < 0)
			num = num * (-1);  //-1�� ��ȣ�� ���� �����
		printf("%d\n\n",num);

		if (num % 2 == 0)
			printf("\t%d�� ¦��\n\n", num);




	system("PAUSE");
	return 0;
}
