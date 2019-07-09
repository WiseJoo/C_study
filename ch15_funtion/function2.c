#include<stdio.h>

// void putStar(int pcs, int line);
void putStar2(int pcs, int line, int current_pcs, int current_line);
int main()
{
    int pcs, line;
    int current_pcs = 0, current_line = 0;

    printf("출력할 줄 수 : ");
    scanf("%d", &line);
    printf("라인 당 출력할 별의 개수 : ");
    scanf("%d", &pcs);

    putStar2(pcs, line, current_pcs, current_line);

    return 0;
    
}

// void putStar(int pcs, int line){
//     for(int i = 0; i < line; i++){
//         for(int j = 0; j < pcs; j++){
//             putchar('*');
//         }
//         printf("\n");
//     }
// }

void putStar2(int pcs, int line, int current_pcs, int current_line){
    if((current_pcs == pcs) && (current_line == line - 1)) {
        return;
    }
    else if(current_pcs == pcs) {
        printf("\n");
        putStar2(pcs, line, 0, current_line+1);
    }
    else {
        putchar('*');
        putStar2(pcs, line, current_pcs+1, current_line);
    }
}