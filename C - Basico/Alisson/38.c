#include <stdio.h>
#include <stdlib.h>

int main (){
    float a,res,aum;
    printf("Digite o salario do funcionario: ");
    scanf("%f",&a);
    aum = a*0.25;
    res = a+aum;
    printf("o valor depois do aumento e = %.2f",res);

    return 0;
}
