#include <windows.h>
#include <stdio.h>

int main(void)
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	char command;

	printf("��ɾ �Է��Ͻÿ�(r �Ǵ� c): ");
	command = getchar();

	if (command == 'r') {
		Rectangle(hdc, 100, 100, 200, 200);
	}
	else if (command == 'c') {
		Ellipse(hdc, 100, 100, 200, 200);
	}
	else {
		printf("�߸��� ��ɾ��Դϴ�. \n");
	}

	return 0;
}
