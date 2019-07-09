#include<stdio.h>

int main()
{
    double Far = 0.0;

    for(;Far <= 100; Far += 20.0){
        printf("%6.2lf F = %6.2lf C\n", Far, (Far - 32) * 5 / 9);
    }

    return 0;
}