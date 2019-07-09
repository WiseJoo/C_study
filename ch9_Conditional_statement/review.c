#include<stdio.h>
int main()
{
    int i;
    printf("숫자를 입력해 주세요:");
    scanf("%d",&i);
    if(i == 0 || i == 1 || i == 2 || i == 3) printf("입력된 숫자는 %d입니다.\n", i);
    else printf("잘못된 입력입니다.\n");

    return 0;
}