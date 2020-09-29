#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int vetorUm[10], vetorDois[10], vetorTres[20], i, j=0, k=0;
    srand(time(NULL));
    
    printf("Vetor 1 | Vetor 2\n");
    for (i = 0; i < 10; i++)
    {
        vetorUm[i] = rand() % 50;
        vetorDois[i] = rand() % 50;

        printf("%d | %d\n", vetorUm[i], vetorDois[i]);
    }
    for (int m = 0; m < 20; m++)
    {
        if (m % 2 == 0)
        {
            vetorTres[m] = vetorUm[j];
            j++;
        }
        else if (m % 2 != 0)
        {
            vetorTres[m] = vetorDois[k];
            k++;
        }
        printf("VetorTres[%d] = %d\n", m, vetorTres[m]);
    }
    return 0;
}