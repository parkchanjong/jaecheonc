#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>



int main(void)
{


	char solution[100] = "meet at midnight"; //정답이 들오 있는 문자열
	char answer[100] = "____ __ ________"; //현재가지 사용자가 맞춘 문자열
	char ch;
	int i;

	while (1) {
		printf("\n 문자열을 입력하시오: %s \n", answer);
		printf("글자를 추측하시오: ");
		ch = _getch();

		//사용자가 입력한 문자를 answer[]에 넣어 정답과 비교
		for (i = 0; solution[i] != NULL; i++) {

			//사용자가 맞추었으면 글자를 보이게 한다
			if (solution[i] == ch)
				answer[i] = ch;
		}
		if (strcmp(solution, answer) == 0) break; //정답과 일치하는지를 검사
	}



	printf("\n");
	system("PAUSE");
}
