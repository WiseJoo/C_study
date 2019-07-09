#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int com[4] = {};
    int user[4] = {};

    int result[2] = {0,0};

    srand(time(NULL));

    printf("BaseBall Game!!");

    for(int i = 0; i < 3; i++){
        com[i] = (rand() % 9) + 1;
    }



 

    for(int i = 0; i < 3; i++){
        printf("%d 번째 위치 : ",i+1);
        scanf("%d", &user[i]);
        printf("\n");
    }

    for(int i = 0; i < 3; i++){
        printf("사용자의 추측값 : ");
        printf("%d", user[i]);
    }
    printf("\n");
    
    for(int i = 0; i < 2; i++)
    result[i] = 0;
    
    for(int i = 0; i < 3; i++){
    if(user[i] == com[i]){
        result[0]++;
    }
    else {
        result[1]++;
    }        
    }
    printf("결과 : ");
    


}