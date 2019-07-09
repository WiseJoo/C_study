#include<stdio.h>
int main()
{
    int count_num = 0;

    printf("숫자를 입력하시오 : ");
    scanf("%d",&count_num);

    while(count_num > 0){
        printf("%d\n", count_num);
        count_num--;
    }

    printf("발사!\n");

    return 0;
}