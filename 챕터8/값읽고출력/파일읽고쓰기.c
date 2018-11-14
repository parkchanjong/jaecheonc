#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 20

void write_Data();			//데이터를 데이터파일(.txt)에 기록
int read_Data(int B[]);		//데이터 파일에서 읽어, 배열B[]에 저장
void Prn(int B[], int n);	//전달된 배열의 요소를 출력

int main(void)
{
	int n, A[SIZE] = { 0 };
	write_Data();
	n = read_Data(A);
	printf("\n\t %d 개의 Raw Data \n", n);
	printf("------------------------------------------------------------------\n");
	Prn(A, n);	//n은 실제 데이터 개수
	printf("------------------------------------------------------------------\n");

	system("PAUSE");

}

void write_Data()
{
	int i = 0, data;

	FILE *fp = NULL;		//*fp 파일 포인터  선언,초기화

	fopen_s(&fp, "Numbers.txt", "w");   //데이터 파일 Numbers.txt
										//쓰기용(w)으로 열어서 주소를 fp에 저장

	srand((unsigned)time(NULL));

	if (fp == NULL)		//연결이 됫는지 체크
	{
		printf("\n\t데이터 파일 Numbers.txt가 없음!! \n");
		return;
	}

	for (i = 0; i < SIZE; i++)  //SIZE만큼의 데이터 생성
	{
		data = rand() % 700 + 300;

		fprintf(fp, "%d", data);  //파일의 적음    fp로 어디까지 적었나 체크
	}
	fclose(fp);  //끝날때 꼭 닫아야 한다
}


int read_Data(int B[])			//배열의 이름은 주소이다
{
	int i = 0, n = 0;
	FILE *fp = NULL;			//파일형(라이브러리) 포인터

	fopen_s(&fp, "Numbers.txt", "r");		//읽기 전용으로 열기		w는 덮어 쓰기 a는 추가하기

	if (fp == NULL)
	{
		printf("\n\t데이터 파일 Numbers.txt가 없음!! \n");
		return;
	}

	while (!feof(fp))		//데이터 파일의 값을 모두 읽기		eof=end of file   fp의 파일끝이 아니면
	{
		fscanf_s(fp, "%d", &B[i]);
		i++;
	}
	n = i;   //파일의 마지막 인덱스보다 하나더큼-> 실제 데이터 개수
	fclose(fp);		//데이터 파일 연결을 끊어놔야함
	return n;

}


void Prn(int B[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%4d", B[i]);
	printf("\n");
}

