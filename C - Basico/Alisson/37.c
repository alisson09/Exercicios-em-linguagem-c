#include <stdio.h>
#include <stdlib.h>

int main (){
    float a,res,des;
    printf("Digite o valor de um produto: ");
    scanf("%f",&a);
    des = a*0.12;
    res = a-des;
    printf("o valor do produto apos o desconto e = %.2f",res);

    return 0;
}
