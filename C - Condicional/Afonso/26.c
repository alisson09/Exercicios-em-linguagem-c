#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float distancia,quantidade,consumo;

    printf("Distancia em KM: ");
    scanf("%f",&distancia);
    printf("Quantidade de combustivel: ");
    scanf("%f",&quantidade);

    consumo=distancia/quantidade;

    if(consumo>8 && consumo<12) 
    {
        printf("Economico!");
    }
    else if(consumo>=12) 
    {
        printf("Super Economico!");
    }
    else 
    {
        printf("Venda o carro!");
    }
    printf("\nConsumo: %0.2f KM/L",consumo);
    return 0;
}
