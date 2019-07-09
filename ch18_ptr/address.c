#include<stdio.h>
int main()
{
    int a= 100;
    int *p = NULL;

    printf("%d\n", a);
    printf("%d\n", &a);
    p = &a;
    printf("%d\n", p);
    printf("%d\n", *p);

    return 0;

}