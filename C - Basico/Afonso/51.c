#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    float x,y,d;
    printf("Coordenada X: ");
    scanf("%f",&x);
    printf("Coordenada Y: ");
    scanf("%f",&y);
    d = sqrt( pow(x,2) + pow(y,2) );
    printf("Distancia da origem: %f",d);
    return 0;
}