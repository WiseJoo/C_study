#include<stdio.h>
#include<limits.h>

int main(){
    int input;
    int max_val = INT_MIN;
    printf("������ �Է��Ͻÿ�(����� Ctrl+z)\n");
    while(scanf("%d", &input) != EOF){
        
        if(input > max_val) max_val = input;
    }

    printf("�ִ밪�� %d\n", max_val);

    return 0;
}