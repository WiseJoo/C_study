#include<stdio.h>

int main(){

    int input;
    printf("���ڸ� �Է��� �ּ���:");
    scanf("%d", &input);

    switch(input)
    {
        case 0: printf("�Էµ� ���ڴ� %d �Դϴ�.\n",input);
                break;
        case 1: printf("�Էµ� ���ڴ� %d �Դϴ�.\n",input);
                break;
        case 2: printf("�Էµ� ���ڴ� %d �Դϴ�.\n",input);
                break;
        case 3: printf("�Էµ� ���ڴ� %d �Դϴ�.\n",input);
                break;
        default : printf("�߸��� �Է��Դϴ�.\n");
                break;
    }

    return 0;
}