#include <windows.h>
#include <stdio.h>

int main(void) {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Rectangle(hdc, 100, 100, 200, 200);	// �簢���� �׸���. 
	Ellispe(hdc, 100, 100, 200, 200);	// ���� �׸���. 
}
