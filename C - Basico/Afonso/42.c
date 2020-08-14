#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    float sal,base;
    printf("Digite o salario-base: ");
    scanf("%f",&base);
    sal=(base+(base*0.05))-(base*0.07);
    printf("Salario a receber: %0.2f", sal);
    return 0;
}