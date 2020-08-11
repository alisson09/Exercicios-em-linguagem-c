#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float comprimento;
    printf("Comprimento Polegadas: ");
    scanf("%f",&comprimento);
    printf("Comprimento Centimetros: %0.2f",(comprimento*2.54));
    return 0;
}
