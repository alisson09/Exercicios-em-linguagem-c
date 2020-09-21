#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int numero, primo = 0;

    do
    {
        printf("Numero: ");
        scanf("%d", &numero);
    } while (numero >= 1);
    
    for (int i=1; i<= numero; i++)
    {
        if (numero % i == 0)
        {
            primo++;
        }
    }

    if (primo == 2) {
        printf("Nmero %d primo\n", numero);
    }
    else {
        printf("Numero %d nao primo\n", numero);
    }
    
    return 0;
}