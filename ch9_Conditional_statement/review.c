#include<stdio.h>
int main()
{
    int i;
    printf("���ڸ� �Է��� �ּ���:");
    scanf("%d",&i);
    if(i == 0 || i == 1 || i == 2 || i == 3) printf("�Էµ� ���ڴ� %d�Դϴ�.\n", i);
    else printf("�߸��� �Է��Դϴ�.\n");

    return 0;
}