#include<stdio.h>

int main()
{
    int x = 10, y = 10;
    x++;
    y++;
    printf("x = %d, y = %d\n", x,y);

    y = ++x;
    printf("x = %d, y = %d\n", x, y);
    y = x++;//y = x++�̸� ���� �࿡�� �ݿ��ȴ�. y = 12�� ���� ���̴�.
    printf("x = %d, y = %d\n", x, y);

    x =+ 3;
    printf("%d\n",x);
    x += 3;
    printf("%d\n",x);
    return 0;

}