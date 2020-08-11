#include <stdio.h>
#include <stdlib.h>

int main (){
    float c,f;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f",&f);
    c = 5.0*(f-32.0)/9.0;
    printf("a temperatura em Celsius e %.2f",c);

    return 0;
}
