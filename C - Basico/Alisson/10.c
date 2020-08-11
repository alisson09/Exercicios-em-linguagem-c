#include <stdio.h>
#include <stdlib.h>

int main (){
    float m,k;
    printf("Digite a velocidade em km/h: ");
    scanf("%f",&k);
    m = k/3.6;
    printf("a velocidade em m/s e %.2f",m);

    return 0;
}
