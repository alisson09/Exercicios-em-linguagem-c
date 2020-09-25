#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int v[5], menor=0,maior=0,posMaior=0, posMenor=0;

    for (int i = 0; i < 5; i++)
    {
        printf("Vetor[%d] = ", i);
        scanf("%d", &v[i]);
        
        if (v[i] > maior)
        {
            maior = v[i];
            posMaior = i;
        }
        if(menor==0)
        {
            menor=v[i];
        }
        else if(v[i]<menor)
        {
            menor=v[i];
            posMenor = i;
        }
    }
    printf("Posicao maior numero lido: %d\n", posMaior);
    printf("Posicao menor numero lido: %d\n", posMenor);
    return 0;
}