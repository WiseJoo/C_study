#include<stdio.h>

int larger(int num1, int num2);

int main(){
    int input1, input2;
    int result;

    printf("�� ���� ������ �Է��Ͻÿ� : ");
    scanf("%d %d", &input1, &input2);

    result = larger(input1, input2);

    switch(result){
        case 1: 
        printf("�� �� �߿��� ū ���� %d�Դϴ�.\n", input1);
        break;
        case 2:
        printf("�� �� �߿��� ū ���� %d�Դϴ�.\n", input2);
        break;
        default:
        printf("�� ���� ũ�Ⱑ �����ϴ�.\n");
    }

    return 0;
}

int larger(int num1, int num2){
    if(num1 > num2) return 1; //num1�� ū ���
    else if(num1 < num2) return 2; //num 2�� ū ���
    else return 3; // ���� ���
}