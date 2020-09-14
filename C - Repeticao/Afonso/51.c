#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int anoAtual,anoInicial=1995;
    float salarioInicial=2000, aumento=1.5;

    printf("Ano Atual: ");
    scanf("%d",&anoAtual);
    
    do
    {
        salarioInicial += (salarioInicial*(aumento/100));
        aumento *= 2;
        anoInicial++;
    } while (anoAtual!=anoInicial);
    
    printf("Salario atual %0.2f\n",salarioInicial);
    return 0;
}