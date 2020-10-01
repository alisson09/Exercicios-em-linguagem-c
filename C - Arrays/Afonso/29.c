#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define num 6

int main(int argc, char const *argv[])
{
    int numeros[num], pares[num], impares[num], i, j=0, k=0, somaPar=0, somaImpar=0;
    srand(time(NULL));

    for (i = 0; i < num; i++)
    {
        numeros[i] = rand() % 50;
        printf("%d ", numeros[i]);
    }
    printf("\n\n");
    for (int i = 0; i < num; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            pares[j] = numeros[i];
            somaPar += numeros[i];           
            printf("%d par\n", pares[j]);
            j++;
        }
        else if (numeros[i] % 2 != 0)
        {
            impares[k] = numeros[i];
            somaImpar += numeros[i];
            printf("%d impar\n", impares[k]);
            k++;
        }
    }
    printf("\nSoma dos pares: %d\n", somaPar);
    printf("Soma dos impares: %d\n", somaImpar);
    return 0;
}