#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>




int main(void) {




	srand(time(NULL));
	int user, computer;

	printf("가위, 바위, 보 게임에 오신 것을 환영합니다. \n");
	printf("하나를 선택하세요(가위-0, 바위-1, 보-2): ");
	scanf_s("%d", &user);		// 사용자로부터 정수를 입력받는다. 

	computer = rand() % 3;	// 컴퓨터가 난수를 발생하여서 정수를 선택한다.
	printf("사용자=%d \n", user);
	printf("컴퓨터=%d \n", computer);

	if ((user + 1) % 3 == computer)	//사용자수에 1을더하고3으로 나눈 나머지가 같으면 컴퓨터의 숫자가 더 높아(2,0제외)서 컴터승리
		printf("컴퓨터 승리 \n");
	else if (computer == user)
		printf("비겼음 \n");
	else
		printf("사용자 승리 \n");





	system("PAUSE");

}
