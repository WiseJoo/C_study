#include<stdio.h>

int main()
{
    int x = 10, y = 10;
    x++;
    y++;
    printf("x = %d, y = %d\n", x,y);

    y = ++x;
    printf("x = %d, y = %d\n", x, y);
    y = x++;//y = x++이면 다음 행에서 반영된다. y = 12가 들어가는 것이다.
    printf("x = %d, y = %d\n", x, y);

    x =+ 3;
    printf("%d\n",x);
    x += 3;
    printf("%d\n",x);
    return 0;

}