#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>




int main(void) {




	srand(time(NULL));
	int user, computer;

	printf("����, ����, �� ���ӿ� ���� ���� ȯ���մϴ�. \n");
	printf("�ϳ��� �����ϼ���(����-0, ����-1, ��-2): ");
	scanf_s("%d", &user);		// ����ڷκ��� ������ �Է¹޴´�. 

	computer = rand() % 3;	// ��ǻ�Ͱ� ������ �߻��Ͽ��� ������ �����Ѵ�.
	printf("�����=%d \n", user);
	printf("��ǻ��=%d \n", computer);

	if ((user + 1) % 3 == computer)	//����ڼ��� 1�����ϰ�3���� ���� �������� ������ ��ǻ���� ���ڰ� �� ����(2,0����)�� ���ͽ¸�
		printf("��ǻ�� �¸� \n");
	else if (computer == user)
		printf("����� \n");
	else
		printf("����� �¸� \n");





	system("PAUSE");

}
