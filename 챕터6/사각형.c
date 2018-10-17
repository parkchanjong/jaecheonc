#include <windows.h>
#include <stdio.h>
int main(void)
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, 100, 100, 200, 200);
	return 0;
}
