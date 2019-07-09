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
    int temp = *numPtr1;           //temp 변수는 num1이 가리키는 주소의 공간이 가진 값
    *numPtr1 = *numPtr2;              //num1이 가진 주소의 공간의 값이 num2가 가진 주소의 공간의 값으로 바뀜
    *numPtr2 = temp;               //num2가 가진 주소의 공간의 값이 temp의 값(기존 num1이 가졌던 주소의 공간의 값)으로 바뀜
}
