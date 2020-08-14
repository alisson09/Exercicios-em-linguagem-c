#include <stdio.h>
#include <stdlib.h>

int main (){
    float a,b,res,adc;
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f",&a);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f",&b);
    adc = (a*b)*0.10;
    res = (a*b)+adc;
    printf("O valor a ser pago e = %.2f",res);

    return 0;
}
