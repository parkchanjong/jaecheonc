
#include <stdio.h>
#define SIZE 10

#define SWAP(x,y,t) ( (t)=(x), (x)=(y), (y)=(t) ) //���� ��ȯ



int main(void) {



	int i, k, tmp;
	int A[SIZE] = { 16, 7, 9, 1, 3 ,11,77,99,22,33 };

	// �迭�� ��Ҹ� �����Ѵ�. 
	for (k = 0; k < SIZE; k++) {
		for (i = 0; i < SIZE - 1; i++) {
			if (A[i] > A[i + 1]) {	// ũ�� ���� �ƴϸ�

				SWAP(A[i], A[i + 1], tmp); // ���� ��ȯ�Ѵ�.
			}
		}
	}

	// �迭�� ��Ҹ� ����Ѵ�. 
	for (i = 0; i < SIZE; i++) {
		printf("%3d ", A[i]);
	}




	system("PAUSE");

}