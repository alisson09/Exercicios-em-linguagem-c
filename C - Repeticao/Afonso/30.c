#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float n,soma=0,somaDois=0;

    printf("Digite um numero: ");
    scanf("%f",&n);

    if (n>=0)
    {
        for (int i = 1; i <= n; i++)
        {
           soma+=i;
        }
        for (int i = 1; i <= n; i+=2)
        {
           somaDois+=i;
        }
        printf("Soma Programa 1 = %0.2f",soma);
        printf("\nSoma Programa 2 = %0.2f",(somaDois));
    }
    else
    {
        printf("Numero invalido");
    }
    return 0;
}