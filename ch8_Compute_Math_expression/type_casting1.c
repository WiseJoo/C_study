#include<stdio.h>
int main(){
    int i;
    printf("%d\n", 3/2);    //정수 연산 결과 : 정수
    printf("%f\n", 3.0/2);  //실수 정수 연산 결과 : 실수
    printf("%f\n", (double)3/2); //정수는 실수로 형변환, 정수 연산 결과 : 실수

    i = (int)1.3 + (int)1.8; //실수 각각을 정수로 형변환 후 연산 결과 : 정수
    printf("%d\n", i );


    //다음 수식이 정확히 계산되도록 수식을 수정하시오. (정확하게 계산되는 값 : 37.777...)
    // double temp;
    // temp = 5/9 * (100 - 32);
    // printf("%f\n", temp);

    // // 수정 후 ver.1
    // double temp;
    // temp = (double)5/9 * (100 - 32);
    // printf("%f\n", temp);

    // // 수정 후 ver.2
    // double temp;
    // temp = 5.0/9 * (100 - 32);
    // printf("%f\n", temp);



    return 0;
}