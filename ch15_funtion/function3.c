#include<stdio.h>

int add(int x, int y){
    return x + y;
}

int sub(int x, int y){
    return x - y;
}
int mul(int x, int y){
    return x * y;
}

double div(int x, int y){
    return (double)x / y;
}

int mod(int x, int y){
    return x % y;
}

int main()
{
    int num1, num2;

    printf("숫자를 입력해 주세요 (예: 3 2) : ");
    scanf("%d %d", &num1, &num2);

    printf("=========result==================\n");
    printf("%d + %d = %5d \n", num1, num2, add(num1,num2));
    printf("%d - %d = %5d \n", num1, num2, sub(num1,num2));
    printf("%d * %d = %5d \n", num1, num2, mul(num1,num2));
    printf("%d / %d = %5.2lf \n", num1, num2, div(num1,num2));
    printf("%d %% %d = %5d \n", num1, num2, mod(num1,num2));
    
}

