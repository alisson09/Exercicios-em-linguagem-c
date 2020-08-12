#include <stdio.h>
#include <stdlib.h>

int main (){
    int a,b,c,soma;
    printf("Digite um numero inteiro: ");
    scanf("%d",&a);
    b = (3*a)+1;
    c = (2*a)-1;
    soma = b+c;
    printf("a soma do sucessor de seu triplo com o antecessor de seu dobro = %d",soma);

    return 0;
}
