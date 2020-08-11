#include <stdio.h>
#include <stdlib.h>

int main (){
    float c,k;
    printf("Digite a temperatura em Kelvin: ");
    scanf("%f",&k);
    c = k-273.15;
    printf("a temperatura em Celsius e %.2f",c);

    return 0;
}
