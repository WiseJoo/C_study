//회원정보 관리

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Person {
    char name[20];
    int age;
    char address[100];
};

int main()
{
    struct Person *p1 = malloc(sizeof(struct Person));

    strcpy(p1->name ,"홍길동");
    p1->age = 30;
    strcpy(p1->address, "경기도 수원시 권선구");


    printf("이름 : %s\n", p1->name);
    printf("나이 : %d\n", p1->age);
    printf("주소 : %s\n", p1->address);

    free(p1);

    return 0;
}