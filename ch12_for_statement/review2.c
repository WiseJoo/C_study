#include<stdio.h>

int main()
{
    int num;
    printf("���ڸ� �Է����ּ���:");
    scanf("%d",&num);
    printf("=======================\n");
    // for(int i = 1; i <= num; i++) printf("%d\n", i);
    for (; num > 1 ; num--) printf("%d\n", num);
    return 0;
}