#include<stdio.h>
int main()
{
    int input,select;
    printf("���ڸ� �Է��� �ּ��� : ");
    scanf("%d",&input);
    if((input >=1) && (input <=12)){
    printf("switch������ ������ ���ϴ� ��� 1��\nif������ ������ ���ϴ� ��� 2�� �Է��� �ּ���.\n�Է� : ");
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
        else printf("�߸��� �Է��Դϴ�.\n");
    }
    }
    else printf("�߸��� �Է��Դϴ�. 1���� 12���� �Է����ּ���");
    return 0;
}