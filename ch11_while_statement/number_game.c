#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int input,exit_number,count_limit, num_max, num_min ,count = 0;
    srand(time(NULL));

    printf("������ ���ڸ� �Է��ϴ� �����Դϴ�.\n");
    printf("������ ���⶧���� �ݺ��˴ϴ�.\n");
    printf("������ ������ �Է��� �ּ��� : ");
    scanf("%d %d", &num_min, &num_max);
    exit_number = (rand() % (num_max+1-num_min))+num_min;
    printf("%d\n",exit_number);
    printf("��ȸ�� �Է��� �ּ��� : ");
    scanf("%d",&count_limit);
    printf("��ȸ�� %d���Դϴ�.\n",count_limit);
    count_limit--;
    printf("���� ����!\n");
    printf("=============================================================\n");

    do{
        printf("���ڸ� �Է����ּ��� : ");
        scanf("%d",&input);
        if(input > exit_number) printf("�Էµ� ������ ������ �۽��ϴ�.\n");
        else if(input < exit_number) printf("�Էµ� ������ ������ Ů�ϴ�.\n");
        

        if((count == count_limit)&&(input != exit_number)) {
        printf("����!\n");
        printf("������ %d �̾����ϴ�.\n", exit_number);
        return 0;
        }
        count++;
    } while(input != exit_number);

    
    printf("�����Դϴ�. (���� : %d, ����ȸ�� : %d)\n", exit_number, count+1);

    return 0;
}