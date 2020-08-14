#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    float comprimento,largura,preco,custo;
    printf("Comprimento do terreno: ");
    scanf("%f",&comprimento);
    printf("Largura do terreno: ");
    scanf("%f",&largura);
    printf("Preco do metro da tela: ");
    scanf("%f",&preco);
    custo = (comprimento*2 + largura*2) * preco;
    printf("Custo para cercar o terreno: RS %0.2f",custo);
    return 0;
}