#include<stdio.h>
int main()
{
    int num1,num2;

    printf("�� ���� �Է����ּ��� : ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2) printf("���� ���� %d",num2);
    else if(num1 == num2) printf("�� ���� ũ�Ⱑ �����ϴ�.\n");
    else printf("���� ���� %d",num1);

    return 0;
}