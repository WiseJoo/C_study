#include<stdio.h>

int main()
{
    for(int i = 1; i <= 9; i++){//단에 곱하는 수 증가
        for(int j = 2; j <= 9; j++){//단 수 증가
            printf("%2d  * %2d = %2d\t", j, i, i*j);
        }
        printf("\n");
    }
}