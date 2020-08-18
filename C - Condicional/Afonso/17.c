#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
   float baseMaior, baseMenor, altura, A;

    printf("Valor da Base Maior: ");
    scanf("%f",&baseMaior);

    printf("Valor da Base Menor: ");
    scanf("%f",&baseMenor);

    if(baseMaior>0 && baseMenor>0)
    {
        printf("Valor da Altura: ");
        scanf("%f",&altura);

        A = ( (baseMaior + baseMenor) * altura ) / 2;
        printf("Area do Trapezio: %0.2f",A);
    }
    else
    {
        printf("Valor das Bases devem ser maior que zero");
    }
    return 0;
}
