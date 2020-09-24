#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int v[10], menor=v[0],maior=v[0];

    for (int i = 0; i < 10; i++)
    {
        printf("Vetor[%d] = ", i);
        scanf("%d", &v[i]);

        if (v[i] < menor)
        {
            menor = v[i];
        }
        if (v[i] > maior)
        {
            maior = v[i];
        }
    }
    printf("Maior numero lido: %d\n", maior);
    printf("Menor numero lido: %d", menor);
    return 0;
}