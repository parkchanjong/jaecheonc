/*7�� �ȿ� ������ 2�� 7��   => 100���� �۵� �α�2�� 100 �� ����Ѽ�*/
#include <stdio.h>





int main(void) {




	int answer = 59;     // ����
	int guess;
	int tries = 0;
	do {
		printf("������ �����Ͽ� ���ÿ�: 1~100");
		scanf_s("%d", &guess);
		tries++;
		if (guess > answer)  // ����ڰ� �Է��� ������ ���亸�� ������
			printf("������ ������ �����ϴ�.");
		if (guess < answer)  // ����ڰ� �Է��� ������ ���亸�� ������
			printf("������ ������ �����ϴ�.");
	} while (guess != answer);
	printf("�����մϴ�. �õ�Ƚ��=%d", tries);




	system("PAUSE");

}