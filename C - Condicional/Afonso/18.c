#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
   int num;
    float val1,val2;

    printf("============\nAdicao: 1\nSubtracao: 2\nMultiplicacao: 3");
    printf("\nDivisao: 4\n============\nDigite o numero da operacao desejada: ");
    scanf("%d",&num);
    printf("============\n");

    if(num>0 && num<5){
        printf("Primeiro Valor: ");
            scanf("%f",&val1);
        printf("Segundo Valor: ");
            scanf("%f",&val2);
    }

    switch(num){
    case 1: printf("Resultado da Adicao: %0.2f",(val1+val2));
        break;
    case 2: printf("Resultado da Subtracao: %0.2f", (val1-val2));
        break;
    case 3: printf("Resultado da Multiplicacao: %0.2f", (val1*val2));
        break;
    case 4: printf("Resultado da Divisao: %0.2f", (val1/val2));
        break;
    default: printf("Numero invalido");
        break;
    }
return 0;
}
