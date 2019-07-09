#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAXINDEX 0
#define MININDEX 1
#define MAXVAL 2
#define MINVAL 3


int main()
{
    int array[10];
    int i,max_index,min_index,temp_min, temp_max;
    int index_val[4]={0,0,1,1};
    //index_val structure
    //|0        |1         |2         |3         |
    //==========|==========|==========|==========|
    //|maxindex |minindex  |maxValue  |minValue  |
    srand(time(NULL));
    for(i = 0; i < 9; i++){
        
        array[i] = rand() % 100 + 1;
        if(i == 0){
            index_val[MINVAL] = array[i];
            index_val[MAXVAL] = array[i];
        }


        if( index_val[MAXVAL] < array[i]){  //최댓값 크기 비교
        index_val[MAXVAL] = array[i];       //배열 최댓값 위치에 저장
        index_val[MAXINDEX] = i;            //배열 최댓값 인덱스 위치에 저장
        }

        if( index_val[MINVAL] > array[i]){  //최솟값 크기 비교
        index_val[MINVAL] = array[i];       //배열 최솟값 위치에 저장
        index_val[MININDEX] = i;            //배열 최솟값인덱스 위치에 저장
        }
    }

    for(i = 0; i < 9; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("배열의 최댓값은 %d 이며 위치는 배열의 %d번째 위치입니다.\n", index_val[MAXVAL], index_val[MAXINDEX]);
    printf("배열의 최솟값은 %d 이며 위치는 배열의 %d번째 위치입니다.\n", index_val[MINVAL], index_val[MININDEX]);

    return 0;
}