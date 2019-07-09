#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAXINDEX 0
#define MININDEX 1
#define MAXVAL 2
#define MINVAL 3
#define SUMVAL 4

int main(){
    int additionalArr[5] = {0,0,1,1,0};
    //additionalArr structure
    //|0        |1         |2         |3         |4         |
    //==========|==========|==========|==========|==========|
    //|maxindex |minindex  |maxValue  |minValue  |sumValue  |
    int selector = 0;
    int pointArr[8];
    double avgPoint;

    printf("���� �Է� ����� ������ �ּ���\n");
    printf("[1 : ����  2 : �Է� ]\n\n");

    printf("��� : ");
    fflush(stdin);
    scanf("%d", &selector);

    if(selector == 1){
        srand(time(NULL));
        printf("\n===================== ���� �Է� =====================\n\n");
    
        for(int i = 0; i < 8; i++){
            pointArr[i] = rand() % 200 + 1;
            printf("%d�� ������ ���� : %4d ��\n", i, pointArr[i]);

            if(i == 0){
                additionalArr[MINVAL] = pointArr[i];
                additionalArr[MAXVAL] = pointArr[i];
            }


            if( additionalArr[MAXVAL] < pointArr[i]){  //�ִ� ũ�� ��
            additionalArr[MAXVAL] = pointArr[i];       //�迭 �ִ� ��ġ�� ����
            additionalArr[MAXINDEX] = i;            //�迭 �ִ� �ε��� ��ġ�� ����
            }

            if( additionalArr[MINVAL] > pointArr[i]){  //�ּڰ� ũ�� ��
            additionalArr[MINVAL] = pointArr[i];       //�迭 �ּڰ� ��ġ�� ����
            additionalArr[MININDEX] = i;            //�迭 �ּڰ��ε��� ��ġ�� ����
            }

            additionalArr[SUMVAL] += pointArr[i];
        }
        
        printf("\n=====================================================\n\n");

    }
    else {
        
        printf("\n===================== ���� �Է� =====================\n\n");
    
        for(int i = 0; i < 8; i++){
            fflush(stdin);
            printf("%d�� ������ ���� : ", i + 1);
            scanf("%d",&pointArr[i]);

            if(i == 0){
                additionalArr[MINVAL] = pointArr[i];
                additionalArr[MAXVAL] = pointArr[i];
            }


            if( additionalArr[MAXVAL] < pointArr[i]){  //�ִ� ũ�� ��
            additionalArr[MAXVAL] = pointArr[i];       //�迭 �ִ� ��ġ�� ����
            additionalArr[MAXINDEX] = i;            //�迭 �ִ� �ε��� ��ġ�� ����
            }

            if( additionalArr[MINVAL] > pointArr[i]){  //�ּڰ� ũ�� ��
            additionalArr[MINVAL] = pointArr[i];       //�迭 �ּڰ� ��ġ�� ����
            additionalArr[MININDEX] = i;            //�迭 �ּڰ��ε��� ��ġ�� ����
            }

            additionalArr[SUMVAL] += pointArr[i];
        }

        printf("\n=====================================================\n\n");

    }

    printf("\n===================== ���� ��� =====================\n\n");
    for(int i = 0; i < 8; i++){
        printf("%d�� ������ ���� : %4d ��", i + 1, pointArr[i]);
        if(i == additionalArr[MININDEX]) printf(" [ �ּڰ����� ���� ���� ]\n");
        else if(i == additionalArr[MAXINDEX]) printf(" [ �ִ����� ���� ���� ]\n");
        else printf("\n");
    }

    printf("\n=====================================================\n\n");

    additionalArr[SUMVAL] -= (additionalArr[MINVAL] + additionalArr[MAXVAL]);
    avgPoint = additionalArr[SUMVAL] / 6.0;
    printf("���� ��� ���� : %lf\n", avgPoint);

    if(avgPoint >= 150) printf("�� ���߾��\n");
    else if(avgPoint >= 100) printf("���߾��\n");
    else printf("����ϼ���\n");

}