//사용자로부터 돈을 입력받고 거스름돈을 각 지폐로 몇개가 되는지 출력하는 프로그램
//방법 1 메모리에 접근이 많아서 비효율적인 방법
#include<stdio.h>
// int main(){
//     int money = 0, price = 0, count = 0;
//     printf("고객으로부터 받은 돈 : ");
//     scanf("%d",&money);

//     printf("물건값 : ");
//     scanf("%d",&price);

//     //거스름돈 계산
//     money -= price;

//     printf("오천원 : %d\n", count = money/5000);
//     money -= count*5000;
//     printf("천원 :\t %d\n", count = money/1000);
//     money -= count*1000;
//     printf("오백원 : %d\n", count = money/500);
//     money -= count*500;
//     printf("백원 :\t %d\n", count = money/100);
//     money -= count*100;
//     printf("오십원 : %d\n", count = money/50);
//     money -= count*50;
//     printf("십원 :\t %d\n", count = money/10);
    
//     return 0;
// }

//방법2 메모리에 접근을 덜 하는 방법
int main(){
    int money = 0, price = 0;
    printf("고객으로부터 받은 돈 : ");
    scanf("%d",&money);

    printf("물건값 : ");
    scanf("%d",&price);

    //거스름돈 계산
    money -= price;

    printf("오천원 : %d\n", money / 5000);

    printf("천원 :\t %d\n", (money%5000) / 1000);

    printf("오백원 : %d\n", ((money%5000) % 1000) / 500);

    printf("백원 :\t %d\n", (((money%5000) % 1000) % 500 ) / 100);

    printf("오십원 : %d\n", ((((money%5000) % 1000) % 500 ) % 100) / 50);

    printf("십원 :\t %d\n", (((((money%5000) % 1000) % 500 ) % 100) % 50) / 10);
    
    return 0;
}