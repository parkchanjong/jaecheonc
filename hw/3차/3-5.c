#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int select, i, sit;
	int state[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	while (1) {

		printf("�¼��� �����Ͻðڽ��ϱ�? (y �Ǵ�n) ");
		select = getchar();
		getchar();


		if (select == 'Y' || 'y') {
			printf("---------------------------------------\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("---------------------------------------\n");

			for (i = 0; i < 10; i++)
				printf("%d ", state[i]);

			while (1) {
				printf("\n�� ��° �¼��� �����Ͻðڽ��ϱ�? ");
				scanf_s("%d", &sit);

				state[sit - 1]++;

				if (state[sit - 1] >= 2)
					printf("�̹� ����� �ڸ��Դϴ�.\n");
				else {
					printf("\n����Ǿ����ϴ�.\n");
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
			printf("�¼� ���� ����\n");
			exit(0);
		}
	}

	printf("\n");
	system("PAUSE");
}