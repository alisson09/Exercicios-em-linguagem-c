#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a, b, num, i, ehprimo, soma = 0;

    printf("Informe a: ");
    scanf("%d", &a);

    printf("Informe b: ");
    scanf("%d", &b);

    if (a > b)
    {
        i = a;
        a = b;
        b = i;
    }
    for (num = a; num <= b; num++)
    {
        ehprimo = 0;
        for (i = 2; i < num; i++)
        { 
            if (num % i == 0)
            {
                ehprimo = 1;
            }
        }
        if (ehprimo == 0)
        {

            soma++;
        }
    }
    if (soma > 0)
    {
        printf("\nNumero de primos em [%d, %d]: %d\n", a, b, soma);
    }
    else
    {
        printf("\nNão existem primos no intervalo [%d, %d]\n", a, b);
    }
    return 0;
}