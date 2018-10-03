#include <stdio.h>
int main(void)
{
       int x = 9;   				// 1001  
       int y = 10;     				// 1010

       printf("%08X & %08X %08X\n", x,y,x & y);		// 1000
       printf("%08X | %08X %08X\n", x, y, x | y);		// 1011
       printf("%08X ^ %08X %08X\n", x, y, x ^ y);		// 0011
       printf("~ %08X %08X\n", x, ~x);		// 0110
 
       return 0;
}
