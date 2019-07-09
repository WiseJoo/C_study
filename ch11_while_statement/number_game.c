#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int input,exit_number,count_limit, num_max, num_min ,count = 0;
    srand(time(NULL));

    printf("정해진 숫자를 입력하는 게임입니다.\n");
    printf("정답을 맞출때까지 반복됩니다.\n");
    printf("숫자의 범위를 입력해 주세요 : ");
    scanf("%d %d", &num_min, &num_max);
    exit_number = (rand() % (num_max+1-num_min))+num_min;
    printf("%d\n",exit_number);
    printf("기회를 입력해 주세요 : ");
    scanf("%d",&count_limit);
    printf("기회는 %d번입니다.\n",count_limit);
    count_limit--;
    printf("게임 시작!\n");
    printf("=============================================================\n");

    do{
        printf("숫자를 입력해주세요 : ");
        scanf("%d",&input);
        if(input > exit_number) printf("입력된 수보다 정답이 작습니다.\n");
        else if(input < exit_number) printf("입력된 수보다 정답이 큽니다.\n");
        

        if((count == count_limit)&&(input != exit_number)) {
        printf("실패!\n");
        printf("정답은 %d 이었습니다.\n", exit_number);
        return 0;
        }
        count++;
    } while(input != exit_number);

    
    printf("정답입니다. (정답 : %d, 도전회수 : %d)\n", exit_number, count+1);

    return 0;
}