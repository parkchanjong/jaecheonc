#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char c;
	//int c;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%c", &c, 1);  //���Ȼ� ���ڸ� ����Ҷ� �ڿ� ���� ���̸� ����
	//scanf_s("%c", &c, );

	printf("�Էµ� ���ڴ� %c =%d �Դϴ�\n", c, c);
	printf("\n\t 7 = %c : '7' = %c \n", 7, '7');
	printf("\n\t 7 = %d : '7' = %d \n", 7, '7');//���ڸ� ����ϴ³� �ƽ�Ű�ڵ� ���� ����ϴ³�



	system("PAUSE");
	return 0;
}