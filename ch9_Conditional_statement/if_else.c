//정수를 입력받아서 출력한다.
//입력받은 정수가 10보다 큰 지 작은 지 판단한다.
#include<stdio.h>

int main(void){
    int i;

    printf("정수를 입력해주세요.:");

    scanf("%d", &i);

    printf("입력한 정수는 %d\n",i);
    if(i>10){
        printf("입력한 정수가 10보다 큽니다.\n");
    }
    else {
        printf("입력한 정수가 10보다 작습니다.\n");
    }

    printf("이것은 무조건 실행");

    return 0;

}