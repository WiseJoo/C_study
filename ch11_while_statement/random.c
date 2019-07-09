#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i=0, num;
    srand(time(NULL));
    while(i<10){
        num = rand()%100 + 1;
        printf("%d\n",num);
        i++;
    }

    return 0;
}