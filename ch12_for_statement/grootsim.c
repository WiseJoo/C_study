#include<stdio.h>
int main()
{
    int water;
    for(;;){
        printf("���� �Է����ּ���:");
        scanf("%d",&water);
        if(water == 0) printf("���� �׷�Ʈ, ���� ���.\n");
        else if(water == 1) printf("�� ����\n");
    }

    return 0;
}