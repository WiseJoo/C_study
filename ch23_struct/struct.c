#include<stdio.h>

/*
struct point
{
    int x, y, z;

};
�����δ� �̷��� ���� �ʴ´�. */

typedef struct point
{
    int x, y, z;
}Point;


int main()
{
    Point p1, p2;
    p1.x = 10; p1.y = 20; p1.z = 30;
    p2 = p1;
    printf("%d %d %d\n", p1.x,p1.y,p1.z);
    printf("%d %d %d\n", p2.x,p2.y,p2.z);
    if(p1.x == p2.x && p1.y == p2.y && p1.z == p2.z){
        printf("�Ȱ���.\n");
    }
    Point p3[100];
    p3[0].x = 1; p3[0].y = 2; p3[0].z = 3;

}