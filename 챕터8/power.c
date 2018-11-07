#include <stdio.h>

// 함수를 정의한다. 
int get_integer()
{
	int value;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &value);
	return value;
}
void power()   //리턴값없당!
{
	int i;
	long result = 1;

	int x = get_integer();
	int y = get_integer();

	for (i = 0; i < y; i++)
		result *= x;
	printf("%d의 %d승 = %d \n", x, y, result);


}


int main(void)
{
	power();

	system("PAUSE");
	return 0;
}
