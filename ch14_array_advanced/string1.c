#include<stdio.h>
int main(){
    int i;
    char str[4] = {'a','b','c','\0'};
    char str1[4] = "abc";
    int a[] = {0,1,2};
    char str2[] = "æ»≥Á«œººø‰";


    for(i = 0; ; i++){
        if(str[i] == '\0')break;
        printf("%c", i[str]);
        printf("%c", str1[i]);
    }
    printf("\n%s\n", str2);

    i = 0;
    while(str2[i] != '\0'){
        i++;
    }
    printf("%d", i);
}