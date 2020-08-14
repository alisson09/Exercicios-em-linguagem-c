#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int d1,d2,d3;
    printf("Digito 1: ");
    scanf("%d",&d1);
    printf("Digito 2: ");
    scanf("%d",&d2);
    printf("Digito 3: ");
    scanf("%d",&d3);
    printf("Numero Lido: %d%d%d\n",d1,d2,d3);
    printf("Numero Gerado: %d%d%d",d3,d2,d1);
    return 0;
}