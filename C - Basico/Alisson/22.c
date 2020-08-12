#include <stdio.h>
#include <stdlib.h>

int main (){
    float j,m;
    printf("Digite um comprimento em jardas: ");
    scanf("%f",&j);
    m = 0.91*j;
    printf("o comprimento em metros e %.2f",m);

    return 0;
}
