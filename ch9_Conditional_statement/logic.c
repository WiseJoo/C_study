// #include<stdio.h>
// int main()
// {
//     if(1)
//         printf("참입니다.\n");
//     printf("끝");
//     return 0;
// }

//하나의 수를 입력받아서 3보다 크고 10보다 작으면 
//잘못된 입력입니다. 라고 출력, 제대로 입력 시 무시하는 프로그램

// #include<stdio.h>
// int main()
// {
//     int i;
//     printf("3보다 크고 10보다 작은 수를 입력해주세요 : ");
//     scanf("%d", &i);

//     if(!((3<i)&&(i<10))) printf("잘못된 입력입니다.\n");

//     return 0;
// }


//숫자를 입력받아 50보다 작거나 100보다 크면 good을 출력, 아닌경우 bad를 출력하는 프로그램
// #include<stdio.h>
// int main()
// {
//     int i;
//     scanf("%d",&i);
//     if((i<50)||(i>100)) printf("good\n");
//     else printf("bad\n");

//     return 0;
// }