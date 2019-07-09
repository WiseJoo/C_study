#include<stdio.h>

int main()
{   int i,j;

    for(i = 2; i < 100; i++){
        for(j = 2; j < i; j++){
            if((i%j) == 0) break;//중간에 약수가 있으면 멈춤
        }
        if(j==i) printf("%d\n", i);//멈췄는데 같은 것이면 소수, 아니면 소수가 아님.
    }
    
    return 0;
}


/*이해를 돕기 위한 설명

i = 4인 경우...
j = 2 -> 4 % 2 == 0으로 성립함.-> break걸림
j == i는 성립하지 않으므로 4는 소수가 아니다. 따라서 다음 반복 수행

 */