#include<stdio.h>

int main()
{
    int input;
    printf("숫자입력 : ");
    scanf("%d",&input);

    (input==0) ? printf("0이다\n") : printf("0이 아니다.\n");
// if(input == 0) a = 0;
// else a = 1;

    return 0;
}