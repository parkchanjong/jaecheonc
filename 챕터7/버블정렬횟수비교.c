
#include <stdio.h>
#define SIZE 10

#define SWAP(x,y,t) ( (t)=(x), (x)=(y), (y)=(t) ) //변수 교환



int main(void) {



	int i, j, pass, tmp, ctot = 0, etot = 0, tag = 0;
	int A[SIZE] = { 16, 7, 9, 1, 3 ,11,77,99,22,33 };
	printf("\n원 자료\t ");
	for (i = 0; i < SIZE - 1; i++) {
		printf("%4d ", A[i]);
	}
	printf("\n-------------------------------------------------------------\n\n");

	// 배열의 요소를 정렬한다. 
	for (pass = 1; pass < SIZE; pass++) {
		tag = 0;		//외부순환에서 다시 태그값 리셋
		for (i = 0; i < SIZE - pass; i++)
			//for (i = 0; i < SIZE - 1; i++) 
		{
			ctot++;
			if (A[i] > A[i + 1]) {	// 크기 순이 아니면

				tag++;	//교환이 일어나면 증가
				etot++;
				SWAP(A[i], A[i + 1], tmp); // 서로 교환한다.
			}
		}
		printf("\n pass %d ", pass);
		for (j = 0; j < SIZE; j++) {
			printf("%4d ", A[j]);
		}
		if (tag == 0)		//교환이 안일어나면 종료
			break;

	}

	printf("\n\n\t 비교횟수 = %d : 교환횟수 = %d\n", ctot, etot);
	printf("\n ");




	system("PAUSE");

}