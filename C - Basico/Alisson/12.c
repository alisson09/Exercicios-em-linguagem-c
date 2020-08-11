#include <stdio.h>
#include <stdlib.h>

int main (){
    float m,k;
    printf("Digite a distancia em milhas: ");
    scanf("%f",&m);
    k = 1.61*m;
    printf("a distancia em km e %.2f",k);

    return 0;
}
