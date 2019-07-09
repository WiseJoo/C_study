#include<stdio.h>
int main()
{
    int input, i = 1;
    printf("input dan what you want : ");
    scanf("%d",&input);

    while(i <= 9){
        printf("%d * %d = %d\n",input, i, input*i);
        i++;
    }

    return 0;
}