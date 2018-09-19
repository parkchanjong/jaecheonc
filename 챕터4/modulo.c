#include <stdio.h>
#include <stdlib.h>
#define SEC_PER_MINUTE 60


int main(void) {
	
	int input,hour, minute, second;

	printf("초단위 시간 입력:");
	scanf_s("%d",&input);

	minute = input / SEC_PER_MINUTE;
	hour = minute / SEC_PER_MINUTE;

	minute = minute % SEC_PER_MINUTE;

	second = input % SEC_PER_MINUTE;

	printf("%d초는 %d시간 %d분 %d초.", input, hour, minute, second);


	system("PAUSE");
	return 0;
}
