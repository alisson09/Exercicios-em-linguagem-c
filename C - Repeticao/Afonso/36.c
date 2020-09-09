#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int soma1=0,soma2=0,quadSoma2,diferenca;

    for (int i=1, j=1; i<=100, j<=100; i++, j++)
    {
        soma1+=(i*i);
        soma2+=j;
    }
    quadSoma2 = (soma2*soma2);
    diferenca = quadSoma2 - soma1;
    printf("Resultado: %d",diferenca);
    return 0;
}