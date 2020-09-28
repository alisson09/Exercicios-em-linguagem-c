#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int vetorUm[10], vetorDois[10], i, j=0;
    srand(time(NULL));
    
    printf("Vetor 1 = ");
    for (i = 0; i < 10; i++)
    {
        vetorUm[i] = rand() % 50;
        printf("%d ", vetorUm[i]);

        if (vetorUm[i] % 2 != 0)
        {
            vetorDois[j] = vetorUm[i];
            j++;
        }
    }

    printf("\nVetor 2 = ");
    for (int m = 0; m < j; m++)
    {
        printf("%d ", vetorDois[m]);
    }
    return 0;
}