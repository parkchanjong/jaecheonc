#include <windows.h>
#include <stdio.h>

int main(void) {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Rectangle(hdc, 100, 100, 200, 200);	// 사각형을 그린다. 
	Ellispe(hdc, 100, 100, 200, 200);	// 원을 그린다. 
}
