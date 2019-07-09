#include<stdio.h>
void helloprint(int num);
int a = 5;
int main()
{
    int a = 3;
    a = 7;
    helloprint(1);
    a = 6;
    helloprint(2);
    helloprint(3);
    printf("%d\n", a);
}

void helloprint(int num){
    static int b = 3;
    switch(num){
        case 1:
        b++;
        printf("%d ¾È³çÇÏ¼¼¿ä\n",num);
        printf("%d\n",b);
        break;
        case 2:
        b++;
        printf("%d ¹Ý°©½À´Ï´Ù.\n",num);
        printf("%d\n",b);
        break;
        
        default:
        b++;
        printf("%d »ç¶ûÇÕ´Ï´Ù.\n",num);
        printf("%d\n",b);
    }
}