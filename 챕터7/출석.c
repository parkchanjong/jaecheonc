
#include <stdio.h>
#define SIZE 16





int main(void) {

	int att_book[SIZE] = { 0 };
	int i, count = 0;

	// ����ڷκ��� �⼮���� �Ἦ������ �޾Ƽ� �迭�� �����Ѵ�. 
	for (i = 0; i < SIZE; i++) {
		printf("%d��° ���ǿ� �⼮�ϼ̳���(�⼮�� 1, �Ἦ�� 0): ", i + 1); //�ε��� 0���� ����ؼ� 0+1
		scanf_s("%d", &att_book[i]);
	}
	// �迭�� �˻��Ͽ��� �Ἦ�� Ƚ���� ����Ѵ�. 
	for (i = 0; i < SIZE; i++) {
		if (att_book[i] == 0)
			count++;
	}

	// �̹� �б� �Ἦ���� ����Ѵ�. 
	double ratio = count / 16.0;    //���������� �����ϸ� 0���ͼ�  16.0�ٿ��ش�
	if (ratio > 0.3)
		printf("���� �ϼ� �����Դϴ�(%f%%). \n", ratio*100.0);



	system("PAUSE");

}