#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float valor;
    do
    {
        printf("-------------------\n");
        printf("Valor Atual: ");
        scanf("%f",&valor);
        if (valor>0)
        {
            printf("Quadrado: %0.2f\n",(valor*valor));
            printf("Cubo: %0.2f\n",(valor*valor*valor));
            printf("Raiz: %0.2f\n",(sqrt(valor)));
        }
    } while (valor>0);
    return 0;
}