#define SWAP(x,y,t) ((t =x),(x=y),(y=t))
#include <stdio.h>

void swap(int x, int y);

int main() {
	int x = 200, y = 500;
	printf("[1] �Լ� ȣ���� x = %d : y = %d\n", x, y);

	swap(x, y);//���� ������ ȣ��  -> �������� ���� �ٲ�°� �ƴ�
	printf("[2] �Լ� ȣ���� x = %d : y = %d\n", x, y);

	printf("\n");
	system("PAUSE");

}

void swap(int x, int y) {
	int t;
	SWAP(x, y, t);
	printf("[3] �Լ� ȣ���� x = %d : y = %d\n", x, y);
}