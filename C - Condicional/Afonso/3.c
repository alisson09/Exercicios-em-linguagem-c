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
        printf("Raiz: %0.2f", sqrt(numero) );
    }
    else
    {
        printf("Ao quadrado: %0.2f", (numero*numero) );
    }
    
    return 0;
}
