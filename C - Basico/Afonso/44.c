#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    float alt,deg,res;
    printf("Altura do degrau: ");
    scanf("%f",&deg);
    printf("Altura de alcance: ");
    scanf("%f",&alt);
    res = alt/deg;
    printf("Devera subir %0.0f degraus", res);
    return 0;
}