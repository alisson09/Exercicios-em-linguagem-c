#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int v[20], i, j;
    bool repete;
    srand(time(NULL));

    for (i = 0; i < 20; i++)
    {
        v[i] = rand() % 10;
        printf("Vetor[%d] = %d\n", i, v[i]);
    }

    for (i = 0; i < 20; i++)
    {
        repete = false;
        for (j = 0; j < i; j++)
        {
            if (v[i] == v[j])
            {
                repete = true;
                break;
            }
        }
        if (!repete)
        {
            printf("%d ", v[i]);
        }
    }

    return 0;
}