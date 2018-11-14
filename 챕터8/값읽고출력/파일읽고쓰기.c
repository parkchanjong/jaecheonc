#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 20

void write_Data();			//�����͸� ����������(.txt)�� ���
int read_Data(int B[]);		//������ ���Ͽ��� �о�, �迭B[]�� ����
void Prn(int B[], int n);	//���޵� �迭�� ��Ҹ� ���

int main(void)
{
	int n, A[SIZE] = { 0 };
	write_Data();
	n = read_Data(A);
	printf("\n\t %d ���� Raw Data \n", n);
	printf("------------------------------------------------------------------\n");
	Prn(A, n);	//n�� ���� ������ ����
	printf("------------------------------------------------------------------\n");

	system("PAUSE");

}

void write_Data()
{
	int i = 0, data;

	FILE *fp = NULL;		//*fp ���� ������  ����,�ʱ�ȭ

	fopen_s(&fp, "Numbers.txt", "w");   //������ ���� Numbers.txt
										//�����(w)���� ��� �ּҸ� fp�� ����

	srand((unsigned)time(NULL));

	if (fp == NULL)		//������ �̴��� üũ
	{
		printf("\n\t������ ���� Numbers.txt�� ����!! \n");
		return;
	}

	for (i = 0; i < SIZE; i++)  //SIZE��ŭ�� ������ ����
	{
		data = rand() % 700 + 300;

		fprintf(fp, "%d", data);  //������ ����    fp�� ������ ������ üũ
	}
	fclose(fp);  //������ �� �ݾƾ� �Ѵ�
}


int read_Data(int B[])			//�迭�� �̸��� �ּ��̴�
{
	int i = 0, n = 0;
	FILE *fp = NULL;			//������(���̺귯��) ������

	fopen_s(&fp, "Numbers.txt", "r");		//�б� �������� ����		w�� ���� ���� a�� �߰��ϱ�

	if (fp == NULL)
	{
		printf("\n\t������ ���� Numbers.txt�� ����!! \n");
		return;
	}

	while (!feof(fp))		//������ ������ ���� ��� �б�		eof=end of file   fp�� ���ϳ��� �ƴϸ�
	{
		fscanf_s(fp, "%d", &B[i]);
		i++;
	}
	n = i;   //������ ������ �ε������� �ϳ���ŭ-> ���� ������ ����
	fclose(fp);		//������ ���� ������ ���������
	return n;

}


void Prn(int B[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%4d", B[i]);
	printf("\n");
}

