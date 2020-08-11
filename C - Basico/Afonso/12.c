#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float distancia;
    printf("Milhas: ");
    scanf("%f",&distancia);
    printf("Quilometros: %0.2f",(1.61*distancia));
    return 0;
}
