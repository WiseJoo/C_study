#include<stdio.h>
int main()
{
    int input, count = 1, result = 1;

    printf("input number : ");
    scanf("%d",&input);

    while(count <= input){
        result *= count;
        count++;
    }

    printf("result = %d\n", result);

    return 0;
}