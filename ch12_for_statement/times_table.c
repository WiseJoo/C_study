#include<stdio.h>

int main()
{
    for(int i = 1; i <= 9; i++){//�ܿ� ���ϴ� �� ����
        for(int j = 2; j <= 9; j++){//�� �� ����
            printf("%2d  * %2d = %2d\t", j, i, i*j);
        }
        printf("\n");
    }
}