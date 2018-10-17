/*각변의 길이가 1~100 사이인 삼각형 중에서 직각 삼각형의 
각변의 조합 (xyz) 출력하기*/



#include <stdio.h>





int main(void) {



	int x, y, z, tot = 0, ctot = 0; //ctot = 비교횟수

	for (x = 1; x <= 100; x++) {
		for (y = x; y <= 100; y++) {
			for (z = y + 1; z <= 100; z++) {  //다른 변보다 길어야되서 +1 부터
				ctot++;
				if (x*x + y * y - z * z == 0) {
					tot++;
					printf("[%3d] : ( %2d , %2d , %2d )\n", tot, x, y, z);
				}
			}
		}
	}

	printf("\n\t 전체 비교 횟수 : %d", ctot);


	system("PAUSE");

}