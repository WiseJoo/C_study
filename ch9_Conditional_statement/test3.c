#include<stdio.h>
int main()
{
    int num1,num2;

    printf("두 수를 입력해주세요 : ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2) printf("작은 수는 %d",num2);
    else if(num1 == num2) printf("두 수의 크기가 같습니다.\n");
    else printf("작은 수는 %d",num1);

    return 0;
}