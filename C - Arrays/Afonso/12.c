#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int v[5], menor=0,maior=0,media=0;

    for (int i = 0; i < 5; i++)
    {
        printf("Vetor[%d] = ", i);
        scanf("%d", &v[i]);
        
        if (v[i] > maior)
        {
            maior = v[i];
        }
        if(menor==0)
        {
            menor=v[i];
        }
        else if(v[i]<menor)
        {
            menor=v[i];
        }
        media += v[i];
    }
    printf("Maior numero lido: %d\n", maior);
    printf("Menor numero lido: %d\n", menor);
    printf("Maior numero lido: %d\n", (media/5));
    return 0;
}