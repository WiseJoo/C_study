#include<stdio.h>

int main(){

    int input;
    printf("숫자를 입력해 주세요:");
    scanf("%d", &input);

    switch(input)
    {
        case 0: printf("입력된 숫자는 %d 입니다.\n",input);
                break;
        case 1: printf("입력된 숫자는 %d 입니다.\n",input);
                break;
        case 2: printf("입력된 숫자는 %d 입니다.\n",input);
                break;
        case 3: printf("입력된 숫자는 %d 입니다.\n",input);
                break;
        default : printf("잘못된 입력입니다.\n");
                break;
    }

    return 0;
}