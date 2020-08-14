#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    float val,par,vis,com1,com2;
    printf("Valor total: ");
    scanf("%f",&val);
    vis = val - (val*0.10);
    par = val/3;
    com1 = vis * 0.05;
    com2 = val * 0.05;
    printf("Valor a vista: %0.2f; Comissao: %0.2f\n",vis,com1);
    printf("Valor parcelado: %0.2f; Comissao: %0.2f",par,com2);
    return 0;
}