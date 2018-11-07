#include <stdio.h>

int global = 123, g2;
void sub1()
{
	printf("[1] global = %d\n", global);
	g2 = 500;			//전역변수는 어디서나 값변경 가능-> 위험!
}
void sub2()
{
	printf("[2] global = %d : g2 = %d\n", global, g2);
}
int main(void)
{
	sub1();
	sub2();
	system("PAUSE");
}
