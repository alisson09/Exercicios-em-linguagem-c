#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float n,h=1;

    printf("Digite um numero: ");
    scanf("%f",&n);

    if (n>=0)
    {
        for (int i = 1; i <= n; i++)
        {
            h += (1.0/i);
        }
        printf("Harmonica(%.0f)= %.2f",n,h);
    }
    else
    {
        printf("Numero invalido");
    }
    return 0;
}