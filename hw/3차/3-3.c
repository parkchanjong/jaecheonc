#include <stdio.h>

int main(void) {
	int student[3][3] = { {30,10,11}, {40,90,32},{70,65,56} };
	int avr[3] = { 0,0,0 }, sum = 0, i, k;

	for (i = 0; i < 3; i++) {
		for (k = 0; k < 3; k++) {
			printf("%d ��° �л��� ������ %d���Դϴ�.\n", i + 1, student[i][k]);
		}
		printf("\n");
	}

	printf("\n");

	for (i = 0; i < 3; i++) {
		for (k = 0; k < 3; k++) {
			sum += student[i][k];

		}
		avr[i] = sum / (double)3;
		sum = 0;
	}

	for (i = 0; i < 3; i++) {
		printf("%d ��° �л��� ��� ������ %d���Դϴ�.\n", i + 1, avr[i]);
	}

	system("PAUSE");
}