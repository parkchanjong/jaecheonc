# include <stdio.h>

int main(void)
{
	int i;
	double number, sum = 0.0;

	for (i = 1; i <= 10; i++)
	{
		printf("%d��° �Ǽ��� �Է��Ͻÿ�: ", i);
		scanf("%lf", &number);	

		if (number < 0.0)
			break;

		sum += number; 
	}

	printf("�հ� = %f", sum);
	return 0;
}
