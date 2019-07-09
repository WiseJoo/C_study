#include<stdio.h>
#include<limits.h>

int main(){
    int input;
    int min_val = INT_MAX;
    printf("정수를 입력하시오(종료는 Ctrl+z)\n");
    while(scanf("%d", &input) != EOF){
        
        if(input < min_val) min_val = input;
    }

    printf("최솟값은 %d\n", min_val);

    return 0;
}