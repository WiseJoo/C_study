#include<stdio.h>

int main()
{
    int arr[9];

    for(int i = 0; i < 9; i++){
        arr[i] = 2*(i+1);
        printf("%d ",arr[i]);
    }

    return 0;

}