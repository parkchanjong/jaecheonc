#include <windows.h>
#include <stdio.h>
#define SIZE 10

int main(void) {
	int i, k;
	int list[SIZE] = { 100, 30, 20, 78, 89, 12, 56, 38, 99, 66 };

	HDC hdc = GetWindowDC(GetForegroundWindow());

	for (k = 0; k < SIZE; k++) {
		Rectangle(hdc, 0, 0, 800, 800);	// 화면을 지운다. 
		for (i = 0; i < SIZE-1; i++) {	// 버블 정렬
			if (list[i] > list[i + 1]) {
				int tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}
		// 배열의 요소를 하나씩 꺼내서 사각형을 그린다. 
		for (i = 0; i < SIZE; i++) {
			Rectangle(hdc, 200 + i * 30, 200, 230 + i * 30, 200 - list[i]);
		}
		Sleep(1000);	// 1초 동안 기다린다. 
	}
	return 0;
}
