#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float distancia;
    printf("Quilometros: ");
    scanf("%f",&distancia);
    printf("Milhas: %0.2f",(distancia/1.61));
    return 0;
}
