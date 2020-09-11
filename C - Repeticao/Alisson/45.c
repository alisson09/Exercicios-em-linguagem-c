#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    float res,km,ms;
    int esc;
        printf("Escola a conversao desejada!\n");
        printf("1: km/h para m/s || 2: m/s para km/h\n");
    do{
        printf("Conversao: ");
        scanf("%d",&esc);
        switch(esc){
        case 1:
            printf("Digite o valor em km/h: ");
            scanf("%f",&km);
            res=km/3.6;
            printf("O resultado da conversao e = %.2f ms\n",res);
            break;
        case 2:
            printf("Digite o valor em m/s: ");
            scanf("%f",&ms);
            res=ms*3.6;
            printf("O resultado da conversao e = %.2f km/h\n",res);
            break;
        case 3:
            printf("Encerrando o programa!\n");
            break;
        default:
            printf("Numero invalido!\n");
            break;
        }
    }while(esc!=3);

    return 0;
}
