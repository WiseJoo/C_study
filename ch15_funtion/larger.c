#include<stdio.h>

int larger(int num1, int num2);

int main(){
    int input1, input2;
    int result;

    printf("두 개의 정수를 입력하시오 : ");
    scanf("%d %d", &input1, &input2);

    result = larger(input1, input2);

    switch(result){
        case 1: 
        printf("두 수 중에서 큰 수는 %d입니다.\n", input1);
        break;
        case 2:
        printf("두 수 중에서 큰 수는 %d입니다.\n", input2);
        break;
        default:
        printf("두 수의 크기가 같습니다.\n");
    }

    return 0;
}

int larger(int num1, int num2){
    if(num1 > num2) return 1; //num1이 큰 경우
    else if(num1 < num2) return 2; //num 2가 큰 경우
    else return 3; // 같은 경우
}