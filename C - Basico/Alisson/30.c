#include <stdio.h>
#include <stdlib.h>

int main (){
    float r,d,c;
    printf("Digite um valor em real: ");
    scanf("%f",&r);
    printf("Digite a cotacao do dolar: ");
    scanf("%f",&d);
    c = r/d;
    printf("o valor dos reais em dolares e %.2f",c);

    return 0;
}
