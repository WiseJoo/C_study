#include<stdio.h>
int main()
{
    int input,result =1;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d",&input);

    for(int i = 1; i <= input; i++ ){
        result *= i;
    }

    printf("%d!�� %d�̴�.\n",input, result);

    return 0;
}