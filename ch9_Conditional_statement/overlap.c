#include<stdio.h>

int main(){
    int x;
    printf("�Է����ּ���:");
    scanf("%d",&x);

    if(x>=100){
            printf("100�̻��Դϴ�.\n");
        if(x>=200){
                printf("200�̻��Դϴ�.\n");
            if(x>=300){
                    printf("300�̻��Դϴ�.\n");
                if(x>=400){
                        printf("400�̻��Դϴ�.\n");
        
                }else   printf("400�̸��Դϴ�.\n");
        
            }else   printf("300�̸��Դϴ�.\n");
        
        }else   printf("200�̸��Դϴ�.\n");
    
    }else   printf("100�̸��Դϴ�.\n");
    return 0;
}