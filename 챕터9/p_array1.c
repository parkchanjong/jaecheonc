#include <stdio.h>


int main() {
	int a[] = { 10, 20, 30, 40, 50 };

	printf("배열의 이름 = %u\n", a);
	printf("첫 번째 원소의 주소 = %u\n", &a[0]);
	printf("두 번째 원소의 주소 = %u\n", &a[1]);

	printf("\n");
	system("PAUSE");

}

