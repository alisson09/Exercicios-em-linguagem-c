#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float custoFabrica,custoConsumidor;

    printf("Custo de Fabrica: ");
    scanf("%f",&custoFabrica);

    if (custoFabrica<12000)
    {
        custoConsumidor = custoFabrica + (custoFabrica*0.05);
    }
    else if (custoFabrica>=12000 && custoFabrica<=25000)
    {
        custoConsumidor = custoFabrica + (custoFabrica*0.10) + (custoFabrica*0.15);
    }
    else
    {
        custoConsumidor = custoFabrica + (custoFabrica*0.15) + (custoFabrica*0.20);
    }
    printf("Custo do Consumidor: %0.2f",custoConsumidor);
    
    return 0;
}