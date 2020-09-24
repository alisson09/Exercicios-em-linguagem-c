#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int v[10] = {2,1,3,4,-9,6,12,8,20,10}, maior=v[0], pos;

    printf("Vetor = { ");
    for (int i = 0; i < 10; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
            pos = i;
        }
        printf("%d ",v[i]);
    }
    printf("}\n");
    printf("Maior numero lido: %d\n", maior);
    printf("Posicao: %d", pos);
    return 0;
}