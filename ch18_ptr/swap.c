#include<stdio.h>

void swap(int *num1, int *num2);

int main()
{
    int a = 1;
    int b = 2;

    printf("[value] a = %d, b = %d\n",a, b);

    swap(&a, &b);

    printf("swap complete\n");
    printf("[value] a = %d, b = %d\n",a, b);

    return 0;
}

void swap(int *numPtr1, int *numPtr2)
{
    int temp = *numPtr1;           //temp ������ num1�� ����Ű�� �ּ��� ������ ���� ��
    *numPtr1 = *numPtr2;              //num1�� ���� �ּ��� ������ ���� num2�� ���� �ּ��� ������ ������ �ٲ�
    *numPtr2 = temp;               //num2�� ���� �ּ��� ������ ���� temp�� ��(���� num1�� ������ �ּ��� ������ ��)���� �ٲ�
}
