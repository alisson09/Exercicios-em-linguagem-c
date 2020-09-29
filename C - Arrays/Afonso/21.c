#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int vetorUm[10], vetorDois[10], vetorTres[10], i;
    srand(time(NULL));
    
    printf("V[1] | V[2] | V[3]\n");
    for (i = 0; i < 10; i++)
    {
        vetorUm[i] = rand() % 50;
        vetorDois[i] = rand() % 50;
        vetorTres[i] = (vetorUm[i] - vetorDois[i]);

        printf("%d - %d = %d\n", vetorUm[i], vetorDois[i], vetorTres[i]);
    }
    return 0;
}