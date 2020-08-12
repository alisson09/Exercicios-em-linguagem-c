#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float comprimento;
    printf("Comprimento em metros: ");
    scanf("%f",&comprimento);
    printf("Comprimento em jardas: %0.2f",(comprimento/0.91));
    return 0;
}
