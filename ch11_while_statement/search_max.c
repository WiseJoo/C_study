#include<stdio.h>
#include<limits.h>

int main(){
    int input;
    int max_val = INT_MIN;
    printf("정수를 입력하시오(종료는 Ctrl+z)\n");
    while(scanf("%d", &input) != EOF){
        
        if(input > max_val) max_val = input;
    }

    printf("최대값은 %d\n", max_val);

    return 0;
}