#include <windows.h>
#include <stdio.h>

int main(void) {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	int x = 30;		// ù ��° �簢���� x��ǥ
	int y = 100;		// ù ��° �簢���� y��ǥ
	int i = 0;		// �ݺ� ���� ����

	while (i < 10) {
		Rectangle(hdc, x, y, x + 60, y + 60);
		x += 70;
		i++;
	}
	return 0;
}
