#include<stdio.h>

int primeChecker(int num);

int main()
{
    int input;

    printf("소수인지 검사할 정수를 입력하시오 : ");
    scanf("%d", &input);

    if(primeChecker(input) == 0) printf("%d는 소수입니다.\n", input);
    else printf("%d는 소수가 아닙니다.\n", input);

    return 0;
}

// int primeChecker(int num){
//     for(int i = 2; i < num; i++){
//         if((i != num)&&(num % i == 0)){
//         return -1;
//         }
//     }

//     return 0;
// }

int primeChecker(int num){
    int i;
    for(i = 2; i < num; i++){
        if(num % i == 0){
        break;
        }
    }
    if(i == num) return 0;
    else return -1;
}