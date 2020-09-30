#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define n 10

int main(int argc, char const *argv[])
{
    float media, desvio, termo;
    int v[n], i, soma = 0;

    for (i = 0; i < n; i++)
    {
        printf("Vetor[%d] = ",i);
        scanf("%d", &v[i]);
        soma += v[i];
    }

    media = soma/n;

    for ( i = 0; i < n; i++)
    {
        termo += pow((v[i]-media),2);
    }
    desvio = sqrt( (1/( (float)n-1 ))*termo );

    printf("\nDesvio padrao = %.2f", desvio);
    return 0;
}