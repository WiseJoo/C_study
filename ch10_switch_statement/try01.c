#include<stdio.h>
int main()
{
    int input,select;
    printf("숫자를 입력해 주세요 : ");
    scanf("%d",&input);
    if((input >=1) && (input <=12)){
    printf("switch문으로 실행을 원하는 경우 1을\nif문으로 실행을 원하는 경우 2를 입력해 주세요.\n입력 : ");
    scanf("%d",&select);

    if(select == 1){
        switch(input){
            case 2: printf("28",input); break;
            case 4: 
            case 6: 
            case 9: 
            case 11: printf("30"); break;
            default : printf("31");
        }
    }
    else{
        if(input == 1) printf("%d -> \"January\"",input);
        else if(input == 2) printf("%d -> \"February\"",input);
        else if(input == 3) printf("%d -> \"March\"",input);
        else if(input == 4) printf("%d -> \"April\"",input);
        else if(input == 5) printf("%d -> \"May\"",input);
        else if(input == 6) printf("%d -> \"June\"",input);
        else if(input == 7) printf("%d -> \"July\"",input);
        else if(input == 8) printf("%d -> \"August\"",input);
        else if(input == 9) printf("%d -> \"September\"",input);
        else if(input == 10) printf("%d -> \"October\"",input);
        else if(input == 11) printf("%d -> \"November\"",input);
        else if(input == 12) printf("%d -> \"December\"",input);
        else printf("잘못된 입력입니다.\n");
    }
    }
    else printf("잘못된 입력입니다. 1부터 12까지 입력해주세요");
    return 0;
}