#include<stdio.h>
int main()
{
    int BaseFirstNum = 2;
    int BaseSecondNum = 2;
    
    int FirstNum = 2;
    int SecondNum = 2;
    for(int k = 0; k < 4; k++){
        BaseSecondNum = 2;
        for(int j = 0; j < 8; j++){//���� ���� �ݺ�, 2���� ���ϹǷ� 7���� ����ǵ��� ��.
            SecondNum = BaseSecondNum;//num3�� ���� ���� for���� ������ ����.
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