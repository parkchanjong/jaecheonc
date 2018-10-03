#include <stdio.h>
#include <stdlib.h>


int main(void) {


	int i;
	double f;

	f = 5 / 4;
	printf("(5 / 4) = %f\n", f);

	f = (double)5 / 4;						//5.0  됨

	printf("(double)5 / 4 = %f\n", f);

	i = 1.3 + 1.8;				//우변의 값을 계산할때는 데이터타입 상관없음
	printf("1.3 + 1.8 = %d\n", i);

	i = (int)1.3 + (int)1.8;
	printf("(int)1.3 + (int)1.8 = %d\n", i);




	system("PAUSE");
	return 0;
}
