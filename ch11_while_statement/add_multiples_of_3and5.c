#include<stdio.h>
int main()
{
    int number = 1;
    int result = 0;

    while(number <= 100)
    {
        if((number %3) && (number %5)) result += number;
        number++;
    }

    printf("result = %d\n", result);

    return 0;
}