#include <windows.h>
#include <stdio.h>
#define SIZE 10

int main(void) {
	int i, k;
	int list[SIZE] = { 100, 30, 20, 78, 89, 12, 56, 38, 99, 66 };

	HDC hdc = GetWindowDC(GetForegroundWindow());

	for (k = 0; k < SIZE; k++) {
		Rectangle(hdc, 0, 0, 800, 800);	// ȭ���� �����. 
		for (i = 0; i < SIZE-1; i++) {	// ���� ����
			if (list[i] > list[i + 1]) {
				int tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}
		// �迭�� ��Ҹ� �ϳ��� ������ �簢���� �׸���. 
		for (i = 0; i < SIZE; i++) {
			Rectangle(hdc, 200 + i * 30, 200, 230 + i * 30, 200 - list[i]);
		}
		Sleep(1000);	// 1�� ���� ��ٸ���. 
	}
	return 0;
}
