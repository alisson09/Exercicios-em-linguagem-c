#include <stdio.h>
#include <stdlib.h>

int main (){
    int ano,idade,anoNasc;
    printf("Digite o ano atual: ");
    scanf("%d",&ano);
    printf("Digite a idade da pessoa: ");
    scanf("%d",&idade);
    anoNasc = ano-idade;
    printf("O ano de nascimento e %d",anoNasc);

    return 0;
}
