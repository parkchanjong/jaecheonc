#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	int user, computer;

	printf("����, ����, �� ���ӿ� ���� ���� ȯ���մϴ�. \n");
	printf("�ϳ��� �����ϼ���(����-0, ����-1, ��-2): ");
	scanf("%d", &user);		// ����ڷκ��� ������ �Է¹޴´�. 

	computer = rand() % 3;	// ��ǻ�Ͱ� ������ �߻��Ͽ��� ������ �����Ѵ�.
	printf("�����=%d \n", user);
	printf("��ǻ��=%d \n", computer);

	if ((user + 1) % 3 == computer)
		printf("��ǻ�� �¸� \n");
	else if (computer == user)
		printf("����� \n");
	else
		printf("����� �¸� \n");

	return 0;
}
