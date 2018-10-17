#include <windows.h>
#include <stdio.h>

int main(void) {

	HDC hdc = GetWindowDC(GetForegroundWindow());
	int x = 30, y = 200;
	int vx = 50, vy = -50;	
	int i;

	MoveToEx(hdc, 30, 200, NULL);	
	LineTo(hdc, 800, 200);	
	for (i=0; i<20; i++) {
		vy = vy + 10;
		x = x + vx;    
		y = y + vy;	
		Ellipse(hdc, x, y, x+10, y+10);
		Sleep(100);
	}
}
