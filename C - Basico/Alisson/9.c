#include <stdio.h>
#include <stdlib.h>

int main (){
    float c,k;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f",&c);
    k = c+273.15;
    printf("a temperatura em Kelvin e %.2f",k);

    return 0;
}
