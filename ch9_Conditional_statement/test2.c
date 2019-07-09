// //사용자로부터 숫자를 입력받아
// //홀수인지 짝수인지 판별하는 프로그램

//  #include<stdio.h>
//  int main()
//  {
//      int i, trigger;
//      printf("짝수인지 홀수인지 판별하겠습니다.\n숫자를 입력해 주세요 : ");

//     //scanf의 반환값을 이용한 예외처리
//      trigger = scanf("%d", &i);
//      while( trigger == 0 ){
//          printf("숫자만 입력하세요\n");
//          printf("입력할 숫자 :");
//          fflush(stdin);
//          trigger = scanf("%d", &i);
//      }

//      if(i%2 == 0) printf("짝수입니다.");
//      else printf("홀수입니다.");
//  }

// 사용자로부터 숫자, 판돈을 입력받음
// 홀수면 금액의 두배를 출력
// 짝수면 금액의 반을 출력하는 프로그램

// #include<stdio.h>
// int main()
// {
//     int num, money;
//     printf("판돈을 입력해 주세요 : "); scanf("%d", &money);
//     printf("숫자를 입력해 주세요 : "); scanf("%d", &num);
    
//     printf("결과는 ");
//     num%2? printf("%d", money * 2) : printf("%d", money / 2);
//     printf("원 입니다.\n");
//     return 0;
// }

// 사용자로부터 숫자, 판돈, 배수를 입력받음
// 홀수면 금액의 판돈 * 배수를 출력
// 짝수면 금액의 판돈 / 배수를 출력하는 프로그램

// #include<stdio.h>
// int main()
// {
//     int num, money, multiple;
//     printf("판돈을 입력해 주세요 : "); scanf("%d", &money);
//     printf("숫자를 입력해 주세요 : "); scanf("%d", &num);
//     printf("배수를 입력해 주세요 : "); scanf("%d", &multiple);
    
//     printf("결과는 ");
//     num%2? printf("%d", money * multiple) : printf("%d", money / multiple);
//     printf("원 입니다.\n");

//     return 0;
// }