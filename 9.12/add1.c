#include<stdio.h>
#include <stdlib.h>//�������

int main(void)     //y = f(x)  �� ������    return 0��  y�� int��
{
	int x = 100, y = 200, sum;			//inter������   ���������� - ������, �̸���x						���ٿ� ��� �������
	//�ʱ�ȭ �ϴ°� Initialize         �ݴ��- �͹̳�	



	//x = 100;   //�������  ������ ���Ҽ� ����


	sum = x + y;
	printf("�μ��� �� = %d \n", sum);
	printf("%d + %d = %d\n", x, y, sum);	//sum ��ſ� x+y�� ��� �������				������ %d�� �ؾ��Ѵ�


	return 0;    //�� �����ߴٰ� �˸� 
	system("PAUSE");

}