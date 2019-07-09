/*

������ : 2019.7.5
�������� : ���������� ���α׷�, ����� �Է¿� ���� ��ǻ�Ͱ� �̰���� ������ ������ ����ϴ� ���α׷�. Ȯ���� �����Ͽ� ������� �·��� ������ �����ؾ� �Ѵ�.
�Է� : 1,2,3 (���� ����, ����, ��)
��� : ����ڰ� �̱� ���� �� ����� ���ڿ�


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
    printf("\t�̿��� �ּż�\n\n");
    printf("\t �����մϴ�.\n");
    printf("\n\n\n\n");
}
void PrintScore(int win, int lose, int draw, int cnt){
    if(cnt != False){
    printf("=============================================\n");
    printf("��/��/��� :  %2d / %2d / %2d\t �·� : %5.2lf\n", win, lose, draw, (double)win/cnt * 100);
    }
}
void PrintChoiceResult(int Com, int User, int result){
    printf("=============================================\n");
    printf("����� ���� : ");

    if(User == ROCK) printf("����");
    else if(User == PARER) printf("��");
    else printf("����");

    printf(" ��ǻ���� ���� : ");

    if(Com == ROCK) printf("����");
    else if(Com == PARER) printf("��");
    else printf("����"); 
    
    printf("\n");
    
    printf("=============================================\n");
}
void PrintStr(int num){
    switch(num){
        case 1:
            printf("=============================================\n");
            printf("���������� �����Դϴ�.\n");
            printf("���� : 1 ���� : 2 �� : 3 (���� : 4)\n");
            printf("��ȣ�� �Է��Ͽ� ��ǻ�Ϳ� �ο������� : ");
            break;
        case 2:
            printf("����� �¸�!\n");
            break;
        case 3:
            printf("����� �й�!\n");
            break;
        default:
            printf("�����ϴ�.\n");
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