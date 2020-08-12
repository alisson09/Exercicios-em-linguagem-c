#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592

int main (){
    float a,r,vol;
    printf("Digite a altura e o raio do cilindro: ");
    scanf("%f %f",&a,&r);
    vol = pi*(r*r)*a;
    printf("o volume do cilindro e = %.2f",vol);

    return 0;
}
