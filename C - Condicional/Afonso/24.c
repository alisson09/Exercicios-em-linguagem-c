#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float produto;
    int estado;

    printf("Preco do Produto: ");
        scanf("%f",&produto);

    printf("---\nEscolha o Estado\n1-MG\n2-SP\n3-RJ\n4-MS\n---\nEstado Selecionado: ");
        scanf("%d",&estado);

    switch(estado){
    case 1: printf("Preco Final: %0.2f\n", (produto = produto + (produto*0.07) ));
        break;
    case 2: printf("Preco Final: %0.2f\n", (produto = produto + (produto*0.12) ));
        break;
    case 3: printf("Preco Final: %0.2f\n", (produto = produto + (produto*0.15) ));
        break;
    case 4: printf("Preco Final: %0.2f\n", (produto = produto + (produto*0.08) ));
        break;
    default: printf("Numero de Estado invalido");
        break;
    }
return 0;
}
