#include<stdio.h>
int main()
{
    int BaseFirstNum = 2;
    int BaseSecondNum = 2;
    
    int FirstNum = 2;
    int SecondNum = 2;
    for(int k = 0; k < 4; k++){
        BaseSecondNum = 2;
        for(int j = 0; j < 8; j++){//곱할 수의 반복, 2부터 곱하므로 7번만 수행되도록 함.
            SecondNum = BaseSecondNum;//num3가 제일 안쪽 for문이 끝나면 증가.
            FirstNum = BaseFirstNum;
            for(int i = 0; i < 2; i++){
                printf("%3d   * %3d  = %3d  ", FirstNum, SecondNum, FirstNum*SecondNum);
                FirstNum++;
            }
            printf("\n");
            BaseSecondNum++;
        }
        printf("\n");
        BaseFirstNum+=2;
    }
}