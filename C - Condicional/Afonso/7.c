#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int numero1, numero2;
    printf("Numero 1: ");
    scanf("%d", &numero1);
    printf("Numero 2: ");
    scanf("%d", &numero2);

    if (numero1>numero2)
    {
        printf("Numero maior: %d", numero1);
    }
    else if (numero1==numero2)
    {
        printf("Numeros iguais");
    }
    else
    {
        printf("Numero maior: %d", numero2);
    }
    
    return 0;
}
