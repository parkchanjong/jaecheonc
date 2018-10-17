#include <stdio.h>





int main(void) {





	int sum = 0, min, max;
	int i = 0;

	printf("두개의 정수입력(작은수 큰수순): ");		//두개 정수 (min,max) 순으로 입력
	scanf_s("%d%d", &min, &max);					//차례로 입력
	i = min;												//i를 min으로 초기화



	while (i < max + 1)
	{
		sum = sum + i;
		printf("i = %2d : sum = %2d \n", i, sum);
		i++;
	}




	system("PAUSE");

}
