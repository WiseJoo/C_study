#include<stdio.h>

int main(){
    int point[10];

    for(int i = 0; i < 10; i++){
        printf("���� %d���� ������ ������? ",i+1);
        scanf("%d", &point[i]);
    }

    for(int i = 1; i < 10; i++){
        point[0] += point[i];
    }

    printf("��� ������ %9.6lf�Դϴ�.\n", point[0] / 10.0);
}