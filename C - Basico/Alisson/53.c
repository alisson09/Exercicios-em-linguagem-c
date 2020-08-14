#include <stdio.h>
#include <stdlib.h>

int main (){
    float comp,larg,pre,cus;
    printf("Digite o comprimento do terreno: ");
    scanf("%f",&comp);
    printf("Digite a largura do terreno: ");
    scanf("%f",&larg);
    printf("Digite o preco do metro da tela: ");
    scanf("%f",&pre);
    cus = (comp*2 + larg*2) * pre;
    printf("O preco para cercar todo o terreno e RS%.2f",cus);

    return 0;
}
