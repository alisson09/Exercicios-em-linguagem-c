#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int vetorUm[10], vetorDois[10], vetorTres[10], i, j=0, k=0;
    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        vetorUm[i] = rand() % 50;

        printf("%d ", vetorUm[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        if (vetorUm[i] % 2 == 0)
        {
            vetorDois[j] = vetorUm[i];
            printf("VetorPar[%d] = %d\n", j, vetorDois[j]);
            j++;
        }
        else if (vetorUm[i] % 2 != 0)
        {
            vetorTres[k] = vetorUm[i];
            printf("VetorImpar[%d] = %d\n", k, vetorTres[k]);
            k++;
        }
    }
    return 0;
}