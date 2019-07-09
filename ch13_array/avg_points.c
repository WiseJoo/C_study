#include<stdio.h>

int main(){
    int point[10];

    for(int i = 0; i < 10; i++){
        printf("게임 %d에서 선수의 득점은? ",i+1);
        scanf("%d", &point[i]);
    }

    for(int i = 1; i < 10; i++){
        point[0] += point[i];
    }

    printf("평균 득점은 %9.6lf입니다.\n", point[0] / 10.0);
}