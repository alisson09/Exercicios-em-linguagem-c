#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float comprimento;
    printf("Comprimento jardas: ");
    scanf("%f",&comprimento);
    printf("Comprimento em metros: %0.2f",(0.91*comprimento));
    return 0;
}
