#include<stdio.h>
int main(){
    int i;
    printf("%d\n", 3/2);    //���� ���� ��� : ����
    printf("%f\n", 3.0/2);  //�Ǽ� ���� ���� ��� : �Ǽ�
    printf("%f\n", (double)3/2); //������ �Ǽ��� ����ȯ, ���� ���� ��� : �Ǽ�

    i = (int)1.3 + (int)1.8; //�Ǽ� ������ ������ ����ȯ �� ���� ��� : ����
    printf("%d\n", i );


    //���� ������ ��Ȯ�� ���ǵ��� ������ �����Ͻÿ�. (��Ȯ�ϰ� ���Ǵ� �� : 37.777...)
    // double temp;
    // temp = 5/9 * (100 - 32);
    // printf("%f\n", temp);

    // // ���� �� ver.1
    // double temp;
    // temp = (double)5/9 * (100 - 32);
    // printf("%f\n", temp);

    // // ���� �� ver.2
    // double temp;
    // temp = 5.0/9 * (100 - 32);
    // printf("%f\n", temp);



    return 0;
}