#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float comprimento;
    printf("Comprimento Centimetros: ");
    scanf("%f",&comprimento);
    printf("Comprimento Polegadas: %0.2f",(comprimento/2.54));
    return 0;
}
