#include <stdio.h>
#include <stdlib.h>

int main (){
    float m,l;
    printf("Digite um volume em litros: ");
    scanf("%f",&l);
    m = l/1000;
    printf("o volume em metros cubicos e %.2f",m);

    return 0;
}
