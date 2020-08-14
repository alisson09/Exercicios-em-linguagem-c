#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    float ap1,ap2,ap3,pr1,pr2,pr3,gan1,gan2,gan3,val,pre;

    printf("Investimento do apostador 1: ");
    scanf("%f",&ap1);
    printf("Investimento do apostador 2: ");
    scanf("%f",&ap2);
    printf("Investimento do apostador 3: ");
    scanf("%f",&ap3);

    printf("Valor do premio: ");
    scanf("%f",&pre);

    val=ap1+ap2+ap3;
    printf("Valor total da aposta: %f\n",val);

    pr1 = ap1 / val;
    pr2 = ap2 / val;
    pr3 = ap3 / val;

    gan1 = pr1 * pre;
    gan2 = pr2 * pre;
    gan3 = pr3 * pre;

    printf("\nApostador 1, porcentagem de %0.2f, leva %0.2f",(pr1*100),gan1);
    printf("\nApostador 2, porcentagem de %0.2f, leva %0.2f",(pr2*100),gan2);
    printf("\nApostador 3, porcentagem de %0.2f, leva %0.2f\n",(pr3*100),gan3);

    return 0;
}