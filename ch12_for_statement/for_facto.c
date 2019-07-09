#include<stdio.h>
int main()
{
    int input,result =1;
    printf("정수를 입력하시오: ");
    scanf("%d",&input);

    for(int i = 1; i <= input; i++ ){
        result *= i;
    }

    printf("%d!은 %d이다.\n",input, result);

    return 0;
}