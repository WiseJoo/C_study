#include<stdio.h>
int main()
{
    int count_num = 0;

    printf("���ڸ� �Է��Ͻÿ� : ");
    scanf("%d",&count_num);

    while(count_num > 0){
        printf("%d\n", count_num);
        count_num--;
    }

    printf("�߻�!\n");

    return 0;
}