//Sum of odd consecutive integers from 1 to 100
//or
//Sum of even consecutive integers from 1 to 100
//or
//Sum of Multiples of 3 integers from 1 to 100
#include<stdio.h>
int main()
{
    int i = 0, sum = 0;

    while(i <= 100){
        // if((i % 2) == 1){
        // sum += i;
        // }
        // if((i % 2) == 0){
        // sum += i;
        // }
        if((i % 3) == 0){
            sum+=i;
        }
        
    i++;
    } 
    printf("%d", sum);

    return 0;
}