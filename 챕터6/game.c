#include <stdio.h>
int main(void)
{
       int answer =59;     // ����
       int guess;
       int tries = 0;
       do  {
             printf("������ �����Ͽ� ���ÿ�: ");
             scanf("%d", &guess);
             tries++;
             if (guess >answer)  // ����ڰ� �Է��� ������ ���亸�� ������
                    printf("������ ������ �����ϴ�.");
             if (guess <answer)  // ����ڰ� �Է��� ������ ���亸�� ������
                    printf("������ ������ �����ϴ�.");
        } while (guess !=answer);
       printf("�����մϴ�. �õ�Ƚ��=%d", tries);
       return 0;
}
