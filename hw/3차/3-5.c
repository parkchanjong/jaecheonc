#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int select, i, sit;
	int state[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	while (1) {

		printf("좌석을 예약하시겠습니까? (y 또는n) ");
		select = getchar();
		getchar();


		if (select == 'Y' || 'y') {
			printf("---------------------------------------\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("---------------------------------------\n");

			for (i = 0; i < 10; i++)
				printf("%d ", state[i]);

			while (1) {
				printf("\n몇 번째 좌석을 예약하시겠습니까? ");
				scanf_s("%d", &sit);

				state[sit - 1]++;

				if (state[sit - 1] >= 2)
					printf("이미 예약된 자리입니다.\n");
				else {
					printf("\n예약되었습니다.\n");
					break;
				}


			}
			printf("---------------------------------------\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("---------------------------------------\n");

			for (i = 0; i < 10; i++)
				printf("%d ", state[i]);
			printf("\n");
		}
		else if (select == 'N' || 'n') {
			printf("좌석 예약 종료\n");
			exit(0);
		}
	}

	printf("\n");
	system("PAUSE");
}