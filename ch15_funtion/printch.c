#include<stdio.h>

void printch(char input, int pcs);

int main()
{
    int pcs;
    char input;

    printf("입력할 문자 : ");
    scanf("%c", &input);

    printf("출력할 개수 : ");
    scanf("%d", &pcs);

    printch(input, pcs);

    return 0;
}

void printch(char input, int pcs){
    if(pcs == 0) return;
    else {
        printf("%c", input);
        printch(input, pcs-1);
    }      
}