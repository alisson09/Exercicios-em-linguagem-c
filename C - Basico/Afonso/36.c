#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    float alt,rai,vol,pi=3.141592;
    printf("Digite a Altura: ");
    scanf("%f",&alt);
    printf("Digite o Raio: ");
    scanf("%f",&rai);
    vol = pi * pow(rai,2) * alt;
    printf("Volume do cilindro: %0.2f",vol);
    return 0;
}