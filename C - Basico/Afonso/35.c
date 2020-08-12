#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    float a,b,hip;
	printf("Digite o cateto A: ");
    scanf("%f",&a);
    printf("Digite o cateto B: ");
    scanf("%f",&b);
    hip = sqrt((a*a) + (b*b));
    printf("Valor da Hipotenusa: %0.2f",hip);
    return 0;
}