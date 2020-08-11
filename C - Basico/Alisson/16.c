#include <stdio.h>
#include <stdlib.h>

int main (){
    float c,p;
    printf("Digite um comprimento em polegadas: ");
    scanf("%f",&p);
    c = p*2.54;
    printf("o comprimento em centimetros e %.2f",c);

    return 0;
}
