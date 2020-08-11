#include <stdio.h>
#include <stdlib.h>

int main (){
    float m,k;
    printf("Digite a velocidade em m/s: ");
    scanf("%f",&m);
    k = m*3.6;
    printf("a velocidade em km/h e %.2f",k);

    return 0;
}
