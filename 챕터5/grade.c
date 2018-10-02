// 성적을 받아서 학점을 결정하는 프로그램
#include <stdio.h>

int main(void)
{
	int score;
	char grade;

	printf("성적을 입력하시오: ");
	scanf("%d", &score);

	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';

	printf("학점 %c \n", grade);
	return 0;
}
