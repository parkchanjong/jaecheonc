
#include <stdio.h>
#define SIZE 10





int main(void) {

	int key, i;
	int list[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	printf("[ ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}
	printf("]\n");

	printf("\tŽ���� ���� �Է��Ͻÿ�:");
	scanf_s("%d", &key);

	for (i = 0; i < SIZE; i++) {
		if (list[i] == key) {
			printf("Ž�� ���� �ε���= %d\n", i);
			break;
		}
	}
	if (i == SIZE)
		printf("\n\t�� �迭��  %d�� ����\n", key);
	printf("\n");
	system("PAUSE");

}