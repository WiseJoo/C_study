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


        if( index_val[MAXVAL] < array[i]){  //�ִ� ũ�� ��
        index_val[MAXVAL] = array[i];       //�迭 �ִ� ��ġ�� ����
        index_val[MAXINDEX] = i;            //�迭 �ִ� �ε��� ��ġ�� ����
        }

        if( index_val[MINVAL] > array[i]){  //�ּڰ� ũ�� ��
        index_val[MINVAL] = array[i];       //�迭 �ּڰ� ��ġ�� ����
        index_val[MININDEX] = i;            //�迭 �ּڰ��ε��� ��ġ�� ����
        }
    }

    for(i = 0; i < 9; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("�迭�� �ִ��� %d �̸� ��ġ�� �迭�� %d��° ��ġ�Դϴ�.\n", index_val[MAXVAL], index_val[MAXINDEX]);
    printf("�迭�� �ּڰ��� %d �̸� ��ġ�� �迭�� %d��° ��ġ�Դϴ�.\n", index_val[MINVAL], index_val[MININDEX]);

    return 0;
}