#include <stdio.h>
#include <stdlib.h>

int main (){
    float c,p;
    printf("Digite um comprimento em centimetros: ");
    scanf("%f",&c);
    p = c/2.54;
    printf("o comprimento em polegadas e %.2f",p);

    return 0;
}
