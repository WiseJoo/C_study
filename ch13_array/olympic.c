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

    printf("점수 입력 방식을 선택해 주세요\n");
    printf("[1 : 랜덤  2 : 입력 ]\n\n");

    printf("방식 : ");
    fflush(stdin);
    scanf("%d", &selector);

    if(selector == 1){
        srand(time(NULL));
        printf("\n===================== 점수 입력 =====================\n\n");
    
        for(int i = 0; i < 8; i++){
            pointArr[i] = rand() % 200 + 1;
            printf("%d번 심판의 점수 : %4d 점\n", i, pointArr[i]);

            if(i == 0){
                additionalArr[MINVAL] = pointArr[i];
                additionalArr[MAXVAL] = pointArr[i];
            }


            if( additionalArr[MAXVAL] < pointArr[i]){  //최댓값 크기 비교
            additionalArr[MAXVAL] = pointArr[i];       //배열 최댓값 위치에 저장
            additionalArr[MAXINDEX] = i;            //배열 최댓값 인덱스 위치에 저장
            }

            if( additionalArr[MINVAL] > pointArr[i]){  //최솟값 크기 비교
            additionalArr[MINVAL] = pointArr[i];       //배열 최솟값 위치에 저장
            additionalArr[MININDEX] = i;            //배열 최솟값인덱스 위치에 저장
            }

            additionalArr[SUMVAL] += pointArr[i];
        }
        
        printf("\n=====================================================\n\n");

    }
    else {
        
        printf("\n===================== 점수 입력 =====================\n\n");
    
        for(int i = 0; i < 8; i++){
            fflush(stdin);
            printf("%d번 심판의 점수 : ", i + 1);
            scanf("%d",&pointArr[i]);

            if(i == 0){
                additionalArr[MINVAL] = pointArr[i];
                additionalArr[MAXVAL] = pointArr[i];
            }


            if( additionalArr[MAXVAL] < pointArr[i]){  //최댓값 크기 비교
            additionalArr[MAXVAL] = pointArr[i];       //배열 최댓값 위치에 저장
            additionalArr[MAXINDEX] = i;            //배열 최댓값 인덱스 위치에 저장
            }

            if( additionalArr[MINVAL] > pointArr[i]){  //최솟값 크기 비교
            additionalArr[MINVAL] = pointArr[i];       //배열 최솟값 위치에 저장
            additionalArr[MININDEX] = i;            //배열 최솟값인덱스 위치에 저장
            }

            additionalArr[SUMVAL] += pointArr[i];
        }

        printf("\n=====================================================\n\n");

    }

    printf("\n===================== 점수 결과 =====================\n\n");
    for(int i = 0; i < 8; i++){
        printf("%d번 심판의 점수 : %4d 점", i + 1, pointArr[i]);
        if(i == additionalArr[MININDEX]) printf(" [ 최솟값으로 인한 제외 ]\n");
        else if(i == additionalArr[MAXINDEX]) printf(" [ 최댓값으로 인한 제외 ]\n");
        else printf("\n");
    }

    printf("\n=====================================================\n\n");

    additionalArr[SUMVAL] -= (additionalArr[MINVAL] + additionalArr[MAXVAL]);
    avgPoint = additionalArr[SUMVAL] / 6.0;
    printf("심판 평균 점수 : %lf\n", avgPoint);

    if(avgPoint >= 150) printf("참 잘했어요\n");
    else if(avgPoint >= 100) printf("잘했어요\n");
    else printf("노력하세요\n");

}