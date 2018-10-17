#include <stdio.h> 

int main(void) 
{ 
        int i, n, sum;               		// 변수 선언 
         
        i = 1;                         		// 변수 초기화 
        sum = 0; 

        while(i <= 1000) 
        { 
                sum += i;             		// sum = sum + i;와 같다. 
                i++;                   		// i = i + 1과 같다. 
        } 
        printf("합은 %d입니다\n",  sum); 
        return 0; 
} 
