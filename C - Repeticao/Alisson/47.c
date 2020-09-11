#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    float res,n1,n2;
    int esc;
        printf("Escolha a operacao desejada!\n");
        printf("1:Adicao || 2:Subtracao || 3:Multiplicacao || 4:Divisao || 5:Saida\n");
    do{
        printf("Operacao: ");
        scanf("%d",&esc);
        switch(esc){
        case 1:
            printf("Digite os valores a serem calculados: ");
            scanf("%f %f",&n1, &n2);
            res=n1+n2;
            printf("Resultado: %.0f\n",res);
            break;
        case 2:
            printf("Digite os valores a serem calculados: ");
            scanf("%f %f",&n1, &n2);
            res=n1-n2;
            printf("Resultado: %.0f\n",res);
            break;
        case 3:
            printf("Digite os valores a serem calculados: ");
            scanf("%f %f",&n1, &n2);
            res=n1*n2;
            printf("Resultado: %.0f\n",res);
            break;
        case 4:
            printf("Digite os valores a serem calculados: ");
            scanf("%f %f",&n1, &n2);
            res=n1/n2;
            printf("Resultado: %.2f\n",res);
            break;
        case 5:
            printf("Finalizando o programa!");
            break;
        default:
            printf("Numero invalido!\n");
            break;
        }
    }while(esc!=5);

    return 0;
}
