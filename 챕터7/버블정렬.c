#include <stdio.h>
#define SIZE 5

int main(void) 
{
	int i, k;
	int list[SIZE] = { 16, 7, 9, 1, 3 };

	// 배열의 요소를 정렬한다. 
	for (k = 0; k < SIZE; k++) {	
		for (i = 0; i < SIZE-1; i++) {
			if (list[i] > list[i + 1]) {	// 크기 순이 아니면
				// 서로 교환한다. 
				int tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}
	}
	
	// 배열의 요소를 출력한다. 
	for (i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}
	return 0;
}
