//����ڷκ��� ���� �Է¹ް� �Ž������� �� ����� ��� �Ǵ��� ����ϴ� ���α׷�
//��� 1 �޸𸮿� ������ ���Ƽ� ��ȿ������ ���
#include<stdio.h>
// int main(){
//     int money = 0, price = 0, count = 0;
//     printf("�����κ��� ���� �� : ");
//     scanf("%d",&money);

//     printf("���ǰ� : ");
//     scanf("%d",&price);

//     //�Ž����� ���
//     money -= price;

//     printf("��õ�� : %d\n", count = money/5000);
//     money -= count*5000;
//     printf("õ�� :\t %d\n", count = money/1000);
//     money -= count*1000;
//     printf("����� : %d\n", count = money/500);
//     money -= count*500;
//     printf("��� :\t %d\n", count = money/100);
//     money -= count*100;
//     printf("���ʿ� : %d\n", count = money/50);
//     money -= count*50;
//     printf("�ʿ� :\t %d\n", count = money/10);
    
//     return 0;
// }

//���2 �޸𸮿� ������ �� �ϴ� ���
int main(){
    int money = 0, price = 0;
    printf("�����κ��� ���� �� : ");
    scanf("%d",&money);

    printf("���ǰ� : ");
    scanf("%d",&price);

    //�Ž����� ���
    money -= price;

    printf("��õ�� : %d\n", money / 5000);

    printf("õ�� :\t %d\n", (money%5000) / 1000);

    printf("����� : %d\n", ((money%5000) % 1000) / 500);

    printf("��� :\t %d\n", (((money%5000) % 1000) % 500 ) / 100);

    printf("���ʿ� : %d\n", ((((money%5000) % 1000) % 500 ) % 100) / 50);

    printf("�ʿ� :\t %d\n", (((((money%5000) % 1000) % 500 ) % 100) % 50) / 10);
    
    return 0;
}