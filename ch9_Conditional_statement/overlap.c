#include<stdio.h>

int main(){
    int x;
    printf("입력해주세요:");
    scanf("%d",&x);

    if(x>=100){
            printf("100이상입니다.\n");
        if(x>=200){
                printf("200이상입니다.\n");
            if(x>=300){
                    printf("300이상입니다.\n");
                if(x>=400){
                        printf("400이상입니다.\n");
        
                }else   printf("400미만입니다.\n");
        
            }else   printf("300미만입니다.\n");
        
        }else   printf("200미만입니다.\n");
    
    }else   printf("100미만입니다.\n");
    return 0;
}