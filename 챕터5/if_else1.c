#include <stdio.h>

int main(void)
{
	int temperature;

	printf("�µ��� �Է��Ͻÿ�:");
	scanf("%d", &temperature);

	if (temperature > 0) 	// temperature�� 0���� ũ�� �Ʒ� ������ ����
		printf("������ �����Դϴ�.\n");
	else 			// temperature�� 0 �����̸� �Ʒ� ������ ����
		printf("������ �����Դϴ�.\n");

	printf("���� �µ��� %d���Դϴ�.\n", temperature); 	// �׻� ����
	return 0;
}
