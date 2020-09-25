#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int vetor[10], c=0;
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        vetor[i] = rand()%10;
        printf("Vetor[%d] = %d\n",i,vetor[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                c++;
                printf("Vetor[%d] = %d\n",i,vetor[i]);
                printf("Vetor[%d] = %d\n",j,vetor[j]);
            }
        }
    }
    printf("Repetiu %d vezes\n", c);
    return 0;
}