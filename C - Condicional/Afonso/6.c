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
        printf("Numero maior: %d\n", numero1);
        printf("Diferenca: %d - %d = %d",numero1,numero2,(numero1-numero2));
    }
    else
    {
        printf("Numero maior: %d", numero2);
        printf("Diferenca: %d - %d = %d",numero2,numero1,(numero2-numero1));
    }
    
    return 0;
}
