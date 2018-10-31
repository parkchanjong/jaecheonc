
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

	printf("\t탐색할 값을 입력하시오:");
	scanf_s("%d", &key);

	for (i = 0; i < SIZE; i++) {
		if (list[i] == key) {
			printf("탐색 성공 인덱스= %d\n", i);
			break;
		}
	}
	if (i == SIZE)
		printf("\n\t이 배열에  %d은 없음\n", key);
	printf("\n");
	system("PAUSE");

}