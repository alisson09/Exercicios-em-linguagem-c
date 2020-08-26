#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int valor = 0, soma=0;
    for (int i = 1; i <= 10; i++)
    {
        printf("Valor %d: ",i);
        scanf("%d",&valor);
        soma += valor;
    }
    printf("Media: %d",(soma/10));
    return 0;
}
