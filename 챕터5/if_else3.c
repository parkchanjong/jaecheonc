#include <stdio.h>

int main(void)
{
	int score;

	printf("성적을 입력하시오:");
	scanf("%d", &score);
	if (score >= 60)	// 성적이 60점 이상이면
	{
		printf("합격입니다.\n");
		printf("장학금도 받을 수 있습니다.\n");
	}
	else			// 그렇지 않으면
	{
		printf("불합격입니다.\n");
		printf("다시 도전하세요.\n");
	}
	return 0;
}
