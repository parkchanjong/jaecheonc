#include<stdio.h>

int main(void)
{
	double light_speed = 30000;
	double distance = 149600000;

	double time;

	time = distance / light_speed;
	time = time / 60.0;

	printf("���� �ӵ��� %fkm/s \n", light_speed);
	printf("�¾�� �������� �Ÿ� %fkm \n", distance);
	printf("���� �ð���  %f�� \n", time);

	return 0;
}