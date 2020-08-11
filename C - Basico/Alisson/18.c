#include <stdio.h>
#include <stdlib.h>

int main (){
    float m,l;
    printf("Digite um volume em metros cubicos: ");
    scanf("%f",&m);
    l = 1000*m;
    printf("o volume em litros e %.2f",l);

    return 0;
}
