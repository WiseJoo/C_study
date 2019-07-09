#include<stdio.h>
int main()
{
    int sum = 0,input,count = 0;;

    for(int i = 0; i < 100; i++){
        sum += i+1;
    }

    printf("1부터 100까지 더한 값은 %d\n", sum);

    printf("숫자를 입력하시오 : ");
    scanf("%d",&input);
    for(int i = 1; i <= input; i++){
        if(input % i == 0){printf("%d\n",i);
        count++;}
    }
    printf("약수의 수 : %d\n", count);
    return 0;
}