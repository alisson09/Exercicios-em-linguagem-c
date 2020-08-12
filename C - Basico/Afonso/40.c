#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    float dia,val;
    printf("Dias trabalhados: ");
    scanf("%f",&dia);
    val = (30 * dia)-((30 * dia)*0.08);
    printf("Quantia a ser paga: %0.2f", val);
    return 0;
}