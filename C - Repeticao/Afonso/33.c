#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, i, j, l=0,k=0;

    printf("Digite sequencia: ");
    scanf("%d", &n);

    printf("Digite um numero: ");
    scanf("%d", &i);

    printf("Digite um numero: ");
    scanf("%d", &j);

    if (n > 0 && i > 0 && j > 0)
    {
        while (l < n)
        {
            if (k % i == 0 || k % j == 0)
            {
                printf("%d  ", k);
                l += 1;
            }
            k += 1;
        }
    }
    else
    {
        printf("Numero invalido");
    }
    return 0;
}