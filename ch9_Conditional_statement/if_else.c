//������ �Է¹޾Ƽ� ����Ѵ�.
//�Է¹��� ������ 10���� ū �� ���� �� �Ǵ��Ѵ�.
#include<stdio.h>

int main(void){
    int i;

    printf("������ �Է����ּ���.:");

    scanf("%d", &i);

    printf("�Է��� ������ %d\n",i);
    if(i>10){
        printf("�Է��� ������ 10���� Ů�ϴ�.\n");
    }
    else {
        printf("�Է��� ������ 10���� �۽��ϴ�.\n");
    }

    printf("�̰��� ������ ����");

    return 0;

}