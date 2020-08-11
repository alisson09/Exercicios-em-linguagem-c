#include <stdio.h>
#include <stdlib.h>

int main (){
    float m,k;
    printf("Digite a distancia em km: ");
    scanf("%f",&k);
    m = k/1.61;
    printf("a distancia em milhas e %.2f",m);

    return 0;
}
