#include<stdio.h>

int main()
{
    int exit_switch;

    do{
    printf("숫자를 입력해 주세요 : ");
    scanf("%d",&exit_switch);
    } while(exit_switch != 0);

    printf("종료되었습니다.\n");
    return 0;

}