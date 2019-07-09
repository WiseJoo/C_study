#include<stdio.h>

int main()
{
    int i = 0, limit;
    printf("몇 번 반복하시겠습니까? \n");
    scanf("%d",&limit);

    while(i < limit){
        printf("안녕하세요\n");
        i++;
    }
}