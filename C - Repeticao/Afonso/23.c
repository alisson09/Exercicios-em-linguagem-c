#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int numero;
    
    printf("Numero: ");
    scanf("%d", &numero);

    printf("Divisivel por: ");
    for (int i = 1; i <= numero; i++)
    {
        if (numero%i == 0)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}