#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int numero, soma=0;
    
    printf("Numero: ");
    scanf("%d", &numero);
    
    for (int i = 1; i < numero; i++)
    {
        if (numero%i == 0)
        {
            soma += i;
        }
    }
    printf("Soma dos Divisores: %d", soma);
    return 0;
}