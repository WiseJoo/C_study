#include<stdio.h>
int main()
{
    //정수형 배열 a 선언
    int a[] = {10,20,30,40};

    printf("%d\n", *a);
    printf("%d\n", *(a+1));

    printf("%d %d %d %d\n", &a[0],&a[1],&a[2],&a[3]);
    printf("%d %d %d %d\n", a, a+1, a+2, a+3);

    return 0;
}