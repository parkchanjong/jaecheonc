#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>



int main(void)
{


	char solution[100] = "meet at midnight"; //������ ��� �ִ� ���ڿ�
	char answer[100] = "____ __ ________"; //���簡�� ����ڰ� ���� ���ڿ�
	char ch;
	int i;

	while (1) {
		printf("\n ���ڿ��� �Է��Ͻÿ�: %s \n", answer);
		printf("���ڸ� �����Ͻÿ�: ");
		ch = _getch();

		//����ڰ� �Է��� ���ڸ� answer[]�� �־� ����� ��
		for (i = 0; solution[i] != NULL; i++) {

			//����ڰ� ���߾����� ���ڸ� ���̰� �Ѵ�
			if (solution[i] == ch)
				answer[i] = ch;
		}
		if (strcmp(solution, answer) == 0) break; //����� ��ġ�ϴ����� �˻�
	}



	printf("\n");
	system("PAUSE");
}
