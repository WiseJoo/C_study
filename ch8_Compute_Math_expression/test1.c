#include<stdio.h>
int main()
{
    int num1, num2;

    printf("2���� ������ �Է��Ͻÿ�<�� 9 2>:");
    scanf("%d %d", &num1, &num2);
    printf("���� %d�Դϴ�.\n", num1/num2);
    printf("�������� %d�Դϴ�.\n", num1%num2);

    return 0;
}