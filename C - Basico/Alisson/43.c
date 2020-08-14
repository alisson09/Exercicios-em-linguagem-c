#include <stdio.h>
#include <stdlib.h>

int main (){
    float vb,res,des;
    printf("Digite o valor base do produto: ");
    scanf("%f",&vb);
    des = vb*0.10;
    res = (vb-des);
    printf("O valor a ser pago com desconto e = %.2f\n",res);
    printf("Ao parcelar em 3x o valor de cada parcela e = %.2f\n",vb/3);
    printf("A comissao do vendedor, no caso da venda ser a vista e = %.2f\n",res*0.05);
    printf("A comissao do vendedor, no caso da venda ser parcelada e = %.2f",vb*0.05);

    return 0;
}
