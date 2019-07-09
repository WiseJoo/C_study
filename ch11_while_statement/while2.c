#include <stdio.h>

int main()
{
    int i = 1, sum = 0;

    while(i < 101){
        sum += i;
        i++;
    }

    printf("sum = %d, i = %d\n", sum, i);

    return 0;
}