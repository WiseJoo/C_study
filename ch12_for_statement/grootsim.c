#include<stdio.h>
int main()
{
    int water;
    for(;;){
        printf("물을 입력해주세요:");
        scanf("%d",&water);
        if(water == 0) printf("아임 그루트, 춤을 춘다.\n");
        else if(water == 1) printf("춤 멈춤\n");
    }

    return 0;
}