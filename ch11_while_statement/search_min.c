#include<stdio.h>
#include<limits.h>

int main(){
    int input;
    int min_val = INT_MAX;
    printf("������ �Է��Ͻÿ�(����� Ctrl+z)\n");
    while(scanf("%d", &input) != EOF){
        
        if(input < min_val) min_val = input;
    }

    printf("�ּڰ��� %d\n", min_val);

    return 0;
}