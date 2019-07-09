#include<stdio.h>
int main()
{
    int num1, num2;

    printf("2개의 정수를 입력하시오<예 9 2>:");
    scanf("%d %d", &num1, &num2);
    printf("몫은 %d입니다.\n", num1/num2);
    printf("나머지는 %d입니다.\n", num1%num2);

    return 0;
}