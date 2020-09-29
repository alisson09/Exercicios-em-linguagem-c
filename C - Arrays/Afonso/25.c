#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int vetor[100], j = 0;

    for (int i = 0; i < 100; i++)
    {
        while (j % 7 == 0 || j % 10 == 7)
        {
            j++;
        }

        vetor[i] = j;
        j++;
    }
    printf("Vetor gerado:\n");

    for (int i = 0; i < 100; i++)
    {
        printf("%d  ", vetor[i]);
    }
    return 0;
}