/*7번 안에 끝난다 2의 7승   => 100보다 작도 로그2의 100 과 비슷한수*/
#include <stdio.h>





int main(void) {




	int answer = 59;     // 정답
	int guess;
	int tries = 0;
	do {
		printf("정답을 추측하여 보시오: 1~100");
		scanf_s("%d", &guess);
		tries++;
		if (guess > answer)  // 사용자가 입력한 정수가 정답보다 높으면
			printf("제시한 정수가 높습니다.");
		if (guess < answer)  // 사용자가 입력한 정수가 정답보다 낮으면
			printf("제시한 정수가 낮습니다.");
	} while (guess != answer);
	printf("축하합니다. 시도횟수=%d", tries);




	system("PAUSE");

}