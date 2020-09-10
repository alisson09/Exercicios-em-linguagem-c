#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float b,h;
    do
    {
        printf("Altura: ");
        scanf("%f",&h);
        printf("Base: ");
        scanf("%f",&b);
    } while (b<=0 || h<=0);
    printf("Area do triangulo: %0.2f",( (b*h)/2) );
    return 0;
}