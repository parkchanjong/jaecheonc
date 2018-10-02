#include <stdio.h>

int main(void)
{
	int temperature;

	printf("온도를 입력하시오:");
	scanf("%d", &temperature);

	if (temperature > 0) 	// temperature가 0보다 크면 아래 문장을 실행
		printf("영상의 날씨입니다.\n");
	else 			// temperature가 0 이하이면 아래 문장을 실행
		printf("영하의 날씨입니다.\n");

	printf("현재 온도는 %d도입니다.\n", temperature); 	// 항상 실행
	return 0;
}
