
#include <stdio.h>





int main(void) {



	int i;
	double number, sum = 0.0;

	for (i = 1; i <= 10; i++)
	{
		printf("%d��° �Ǽ��� �Է��Ͻÿ�: ", i);
		scanf_s("%lf", &number);

		if (number < 0.0)
			break;

		sum += number;
	}

	printf("�հ� = %f", sum);




	system("PAUSE");

}