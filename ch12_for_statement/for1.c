#include<stdio.h>
int main(){
    int i,sum = 0;
    printf("어디까지 계산할까요? : ");
    scanf("%d", &i);

    for(; i>0; i--){
        sum += i;
    }

    printf("1부터 %d까지의 정수의 합 = %d\n",i, sum);

    return 0;
}