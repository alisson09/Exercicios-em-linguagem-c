#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int anoAtual,anoInicial=1995;
    float sInicial=2000, aumento=0.015;

    printf("Ano Atual: ");
    scanf("%d",&anoAtual);

    do
    {
        sInicial += (sInicial*aumento);
        aumento *= 2;
        anoInicial++;
    } while (anoAtual!=anoInicial);
    printf("Salario atual %.2f\n",sInicial);

    return 0;
}
