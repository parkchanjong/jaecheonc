
#include <stdio.h>
#define SIZE 26		//�������� ���α׷� ���ο��� �ٲܼ� ����





int main(void) {


	int i;
	char codes[SIZE];

	for (i = 0; i < SIZE; i++)
		codes[i] = 'A' + i;			// ��a'�� 1�� ���ϸ� ��b'�� �ȴ�. 

	for (i = 0; i < SIZE; i++)
		printf("%c ", codes[i]);   //���� %c ���
	codes[SIZE - 1] = 0;
	printf("\n");

	printf("\n\t%s\n\n", codes);			//���ڿ�  %s ���

	printf("\n");



	system("PAUSE");

}