// //����ڷκ��� ���ڸ� �Է¹޾�
// //Ȧ������ ¦������ �Ǻ��ϴ� ���α׷�

//  #include<stdio.h>
//  int main()
//  {
//      int i, trigger;
//      printf("¦������ Ȧ������ �Ǻ��ϰڽ��ϴ�.\n���ڸ� �Է��� �ּ��� : ");

//     //scanf�� ��ȯ���� �̿��� ����ó��
//      trigger = scanf("%d", &i);
//      while( trigger == 0 ){
//          printf("���ڸ� �Է��ϼ���\n");
//          printf("�Է��� ���� :");
//          fflush(stdin);
//          trigger = scanf("%d", &i);
//      }

//      if(i%2 == 0) printf("¦���Դϴ�.");
//      else printf("Ȧ���Դϴ�.");
//  }

// ����ڷκ��� ����, �ǵ��� �Է¹���
// Ȧ���� �ݾ��� �ι踦 ���
// ¦���� �ݾ��� ���� ����ϴ� ���α׷�

// #include<stdio.h>
// int main()
// {
//     int num, money;
//     printf("�ǵ��� �Է��� �ּ��� : "); scanf("%d", &money);
//     printf("���ڸ� �Է��� �ּ��� : "); scanf("%d", &num);
    
//     printf("����� ");
//     num%2? printf("%d", money * 2) : printf("%d", money / 2);
//     printf("�� �Դϴ�.\n");
//     return 0;
// }

// ����ڷκ��� ����, �ǵ�, ����� �Է¹���
// Ȧ���� �ݾ��� �ǵ� * ����� ���
// ¦���� �ݾ��� �ǵ� / ����� ����ϴ� ���α׷�

// #include<stdio.h>
// int main()
// {
//     int num, money, multiple;
//     printf("�ǵ��� �Է��� �ּ��� : "); scanf("%d", &money);
//     printf("���ڸ� �Է��� �ּ��� : "); scanf("%d", &num);
//     printf("����� �Է��� �ּ��� : "); scanf("%d", &multiple);
    
//     printf("����� ");
//     num%2? printf("%d", money * multiple) : printf("%d", money / multiple);
//     printf("�� �Դϴ�.\n");

//     return 0;
// }