#include <stdio.h>
#include <stdlib.h>

int main (){
    float c,f;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f",&c);
    f= c*(9.0/5.0)+32.0;
    printf("a temperatura em Fahrenheit e %.2f",f);

    return 0;
}
