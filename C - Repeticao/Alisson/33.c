#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int n, i, j, k = 0, l = 1;
    printf("Digite um numero de multiplos a ser obtido: ");
    scanf("%d", &n);
    while (n <= 0)
    {
        printf("\nO numero precisa ser maior que 0: ");
        scanf("%d", &n);
    }

    printf("\nDigite o valor de i: ");
    scanf("%d", &i);
    while (i <= 0)
    {
        printf("\nO numero precisa ser maior que 0: ");
        scanf("%d", &i);
    }

    printf("\nDigite o valor de j: ");
    scanf("%d", &j);
    while (j <= 0)
    {
        printf("\nO numero precisa ser maior que 0: ");
        scanf("%d", &j);
    }
    
    while (l <= n)
    {
        if (k % i == 0 || k % j == 0)
        {
            printf("%d ", k);
            l = l + 1;
        }
        k = k + 1;
    }

    return 0;
}
