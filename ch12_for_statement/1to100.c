#include<stdio.h>
int main()
{
    int sum = 0,input,count = 0;;

    for(int i = 0; i < 100; i++){
        sum += i+1;
    }

    printf("1���� 100���� ���� ���� %d\n", sum);

    printf("���ڸ� �Է��Ͻÿ� : ");
    scanf("%d",&input);
    for(int i = 1; i <= input; i++){
        if(input % i == 0){printf("%d\n",i);
        count++;}
    }
    printf("����� �� : %d\n", count);
    return 0;
}