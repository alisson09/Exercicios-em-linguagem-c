#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int numero;
    printf("Numero: ");
    scanf("%i", &numero);

    if (numero%2==0)
    {
        printf("Numero par");
    }
    else
    {
        printf("Numero impar");
    }
    
    return 0;
}
