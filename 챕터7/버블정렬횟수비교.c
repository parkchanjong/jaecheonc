
#include <stdio.h>
#define SIZE 10

#define SWAP(x,y,t) ( (t)=(x), (x)=(y), (y)=(t) ) //���� ��ȯ



int main(void) {



	int i, j, pass, tmp, ctot = 0, etot = 0, tag = 0;
	int A[SIZE] = { 16, 7, 9, 1, 3 ,11,77,99,22,33 };
	printf("\n�� �ڷ�\t ");
	for (i = 0; i < SIZE - 1; i++) {
		printf("%4d ", A[i]);
	}
	printf("\n-------------------------------------------------------------\n\n");

	// �迭�� ��Ҹ� �����Ѵ�. 
	for (pass = 1; pass < SIZE; pass++) {
		tag = 0;		//�ܺμ�ȯ���� �ٽ� �±װ� ����
		for (i = 0; i < SIZE - pass; i++)
			//for (i = 0; i < SIZE - 1; i++) 
		{
			ctot++;
			if (A[i] > A[i + 1]) {	// ũ�� ���� �ƴϸ�

				tag++;	//��ȯ�� �Ͼ�� ����
				etot++;
				SWAP(A[i], A[i + 1], tmp); // ���� ��ȯ�Ѵ�.
			}
		}
		printf("\n pass %d ", pass);
		for (j = 0; j < SIZE; j++) {
			printf("%4d ", A[j]);
		}
		if (tag == 0)		//��ȯ�� ���Ͼ�� ����
			break;

	}

	printf("\n\n\t ��Ƚ�� = %d : ��ȯȽ�� = %d\n", ctot, etot);
	printf("\n ");




	system("PAUSE");

}