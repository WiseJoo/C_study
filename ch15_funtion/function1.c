#include<stdio.h>

int add(int a, int b);

int main()
{

    int test1, test2;

    test1 = 3;
    test2 = 4;
    int sum1 = add(test1, test2);

    printf("%d\n", sum1);

    return 0;
}

int add(int a, int b){
    int sum;
    sum = a+b;
    return sum;
}