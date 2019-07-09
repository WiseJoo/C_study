#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    int NoTIMES = 0, count = 0, throw_times =0;
    double progress = 0;
    double tick = 1;
    srand(time(NULL));
    int partial_c_1 = 0;
    int partial_c_2 = 0;
    int partial_c_3 = 0;
    int partial_c_4 = 0;
    int partial_c_5 = 0;
    int partial_c_6 = 0;

    printf("ÁÖ»çÀ§ ¹Ýº¹ È¸¼ö = ");
    scanf("%d", &throw_times);

printf("[");
    for(int i = 0; i <= throw_times; i++){

    
    NoTIMES = rand()%6+1;
        switch(NoTIMES){
            case 1:
            {
                partial_c_1++;
                break;
            }
            case 2:
            {
                partial_c_2++;
                break;
            }
            case 3:
            {
                partial_c_3++;
                break;
            }
            case 4:
            {
                partial_c_4++;
                break;
            }
            case 5:
            {
                partial_c_5++;
                break;
            }
            case 6:
            {
                partial_c_6++;
                break;
            }
        }
    }
    printf("´«±Ý 1ÀÇ È®·ü = %8.3lf%%\n", (double)partial_c_1/throw_times*100);
    printf("´«±Ý 2ÀÇ È®·ü = %8.3lf%%\n", (double)partial_c_2/throw_times*100);
    printf("´«±Ý 3ÀÇ È®·ü = %8.3lf%%\n", (double)partial_c_3/throw_times*100);
    printf("´«±Ý 4ÀÇ È®·ü = %8.3lf%%\n", (double)partial_c_4/throw_times*100);
    printf("´«±Ý 5ÀÇ È®·ü = %8.3lf%%\n", (double)partial_c_5/throw_times*100);
    printf("´«±Ý 6ÀÇ È®·ü = %8.3lf%%\n", (double)partial_c_6/throw_times*100);

    return 0;
}