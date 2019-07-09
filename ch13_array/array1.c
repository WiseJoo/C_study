#include<stdio.h>

int main()
{
    int array[10];
    // array[0] = 1;
    // array[1] = 2;
    // array[2] = 3;
    // array[3] = 4;
    // array[4] = 5;
    // array[5] = 6;

    // printf("%d\n", array[0]);
    // printf("%d\n", array[1]);
    // printf("%d\n", array[2]);
    // printf("%d\n", array[3]);
    // printf("%d\n", array[4]);
    // printf("%d\n", array[5]);

    for(int i = 0; i < 10; i++){
        array[i] = i+1;
    }

    for(int i = 0; i < 10; i++){
        if((i!=0) &&(i%2 == 0)){
        printf("array[%d] = %d\n", i, array[i]);
        }
    }

    return 0;        

}