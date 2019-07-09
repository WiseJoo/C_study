/*

출제일 : 2019.7.5
문제설명 : 가위바위보 프로그램, 사용자 입력에 따라 컴퓨터가 이겼는지 졌는지 비겼는지 출력하는 프로그램. 확률을 조작하여 사용자의 승률이 낮도록 조작해야 한다.
입력 : 1,2,3 (각각 가위, 바위, 보)
출력 : 사용자가 이긴 경우와 진 경우의 문자열


 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROCK 2
#define PARER 3
#define SCISSORS 1
#define ResetRandom srand(time(NULL))
#define Question 1
#define False 0

void PrintThanks(){
    printf("\n\n\n\n");
    printf("\t이용해 주셔서\n\n");
    printf("\t 감사합니다.\n");
    printf("\n\n\n\n");
}
void PrintScore(int win, int lose, int draw, int cnt){
    if(cnt != False){
    printf("=============================================\n");
    printf("승/패/비김 :  %2d / %2d / %2d\t 승률 : %5.2lf\n", win, lose, draw, (double)win/cnt * 100);
    }
}
void PrintChoiceResult(int Com, int User, int result){
    printf("=============================================\n");
    printf("당신의 선택 : ");

    if(User == ROCK) printf("바위");
    else if(User == PARER) printf("보");
    else printf("가위");

    printf(" 컴퓨터의 선택 : ");

    if(Com == ROCK) printf("바위");
    else if(Com == PARER) printf("보");
    else printf("가위"); 
    
    printf("\n");
    
    printf("=============================================\n");
}
void PrintStr(int num){
    switch(num){
        case 1:
            printf("=============================================\n");
            printf("가위바위보 게임입니다.\n");
            printf("가위 : 1 바위 : 2 보 : 3 (종료 : 4)\n");
            printf("번호를 입력하여 컴퓨터와 싸워보세요 : ");
            break;
        case 2:
            printf("당신의 승리!\n");
            break;
        case 3:
            printf("당신의 패배!\n");
            break;
        default:
            printf("비겼습니다.\n");
            break;
    }
}
int ComChoiseLogic(int *ComVal){
    ResetRandom;
    *ComVal = (rand() % 3) +1;
}

void UserChoiseLogic(int *Userinput){
    scanf("%d", Userinput);
}

int FightLogic(int comchoice, int userchoice){
int ruleArr[3][3] = {{3, 2, 1}, {1, 3, 2}, {2, 1, 3}};
return ruleArr[userchoice][comchoice];
}

void resultAccept(int *win, int *lose, int *draw, int result){
   switch (result)
   {
   case 1:
       *win = (*win) + 1;
       break;
   case 2:
        *lose = (*lose) + 1;
        break;

   default:
        *draw = (*draw) + 1;
       break;
   } 
       
}

int main(){

    int ComChoice = 0, UserChoice = 0;
    int result = 0, FightCnt = 0;
    int Win = 0, Lose = 0, Draw = 0;

    while(1){

    PrintScore(Win, Lose, Draw, FightCnt);
    PrintStr(1);

    UserChoiseLogic(&UserChoice);

    if(UserChoice == 4) {
        PrintThanks();
        break;
    }

    ComChoiseLogic(&ComChoice);
    result = FightLogic(ComChoice, UserChoice);
    PrintChoiceResult(ComChoice, UserChoice, result);
    resultAccept(&Win, &Lose, &Draw, result);
    PrintStr(result+1);

    FightCnt++;

    }
}