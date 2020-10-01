#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int v[10], v1[10], i, j, k, cont = 0, a = 0;
    int v2[10], repetido;

    printf("Informe o primeiro vetor.\n");
    for (i = 0; i < 10; i++)
    {
        printf("Vetor 1 [%d]: ", i);
        scanf("%d", &v[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("Vetor 2 [%d]: ", i);
        scanf("%d", &v1[i]);
    }
    for (i = 0, a = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (v[i] == v1[j])
            {
                repetido = 0;
                for (k = 0; k < a; k++)
                {
                    if (v[i] == v2[k])
                    {
                        repetido = 1;
                    }
                }
                if (!repetido)
                {
                    v2[a] = v[i];
                    printf("\n%d %d", v2[a], v[i]);
                    a++;
                }
            }
        }
    }
    printf("Interseccao entre os dois vetores:\n");
    for (i = 0; i < a; i++)
    {
        printf("Vetor [%d]: %d\n", i, v2[i]);
    }

    return 0;
}