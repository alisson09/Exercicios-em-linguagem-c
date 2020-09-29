#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float vetorUm[5], vetorDois[5], produto;
    srand(time(NULL));
    
    printf("Vetor 1 | Vetor 2\n");
    for (int i = 0; i < 5; i++)
    {
        vetorUm[i] = rand() % 50;
        vetorDois[i] = rand() % 50;

        produto += (vetorUm[i]*vetorDois[i]);

        printf("%.2f | %.2f\n", vetorUm[i], vetorDois[i]);
    }
    printf("Produto Escalar %.2f\n", produto);
    return 0;
}