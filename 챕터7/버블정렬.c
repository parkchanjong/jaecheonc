#include <stdio.h>
#define SIZE 5

int main(void) 
{
	int i, k;
	int list[SIZE] = { 16, 7, 9, 1, 3 };

	// �迭�� ��Ҹ� �����Ѵ�. 
	for (k = 0; k < SIZE; k++) {	
		for (i = 0; i < SIZE-1; i++) {
			if (list[i] > list[i + 1]) {	// ũ�� ���� �ƴϸ�
				// ���� ��ȯ�Ѵ�. 
				int tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}
	}
	
	// �迭�� ��Ҹ� ����Ѵ�. 
	for (i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}
	return 0;
}
