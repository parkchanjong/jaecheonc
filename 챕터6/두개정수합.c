#include <stdio.h>





int main(void) {





	int sum = 0, min, max;
	int i = 0;

	printf("�ΰ��� �����Է�(������ ū����): ");		//�ΰ� ���� (min,max) ������ �Է�
	scanf_s("%d%d", &min, &max);					//���ʷ� �Է�
	i = min;												//i�� min���� �ʱ�ȭ



	while (i < max + 1)
	{
		sum = sum + i;
		printf("i = %2d : sum = %2d \n", i, sum);
		i++;
	}




	system("PAUSE");

}
