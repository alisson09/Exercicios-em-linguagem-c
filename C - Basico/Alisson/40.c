#include <stdio.h>
#include <stdlib.h>

int main (){
    float a,res,des;
    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%f",&a);
    des = (a*30)*0.08;
    res = (a*30)-des;
    printf("O valor liquido a ser pago e = %.2f",res);

    return 0;
}
