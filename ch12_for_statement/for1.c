#include<stdio.h>
int main(){
    int i,sum = 0;
    printf("������ ����ұ��? : ");
    scanf("%d", &i);

    for(; i>0; i--){
        sum += i;
    }

    printf("1���� %d������ ������ �� = %d\n",i, sum);

    return 0;
}