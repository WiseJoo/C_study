#include<stdio.h>

int primeChecker(int num);

int main()
{
    int input;

    printf("�Ҽ����� �˻��� ������ �Է��Ͻÿ� : ");
    scanf("%d", &input);

    if(primeChecker(input) == 0) printf("%d�� �Ҽ��Դϴ�.\n", input);
    else printf("%d�� �Ҽ��� �ƴմϴ�.\n", input);

    return 0;
}

// int primeChecker(int num){
//     for(int i = 2; i < num; i++){
//         if((i != num)&&(num % i == 0)){
//         return -1;
//         }
//     }

//     return 0;
// }

int primeChecker(int num){
    int i;
    for(i = 2; i < num; i++){
        if(num % i == 0){
        break;
        }
    }
    if(i == num) return 0;
    else return -1;
}