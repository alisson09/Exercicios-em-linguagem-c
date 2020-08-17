#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float numero;
    printf("Numero: ");
    scanf("%f", &numero);

    if (numero>=0)
    {
        printf("Raiz: %0.2f\n", sqrt(numero) );
        printf("Ao quadrado: %0.2f", (numero*numero) );
    }
    else
    {
        printf("Numero Invalido");
    }
    
    return 0;
}
