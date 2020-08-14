#include <stdio.h>
#include <stdlib.h>

int main (){
    float sb,res,des,adc;
    printf("Digite o salario base: ");
    scanf("%f",&sb);
    adc = sb*0.05;
    des = sb*0.07;
    res = (sb+adc)-des;
    printf("O valor a ser pago e = %.2f",res);

    return 0;
}
