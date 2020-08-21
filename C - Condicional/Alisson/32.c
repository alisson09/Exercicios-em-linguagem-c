#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float qnt,res;
    int produto;
    printf("Digite o codigo do produto: ");
    scanf("%d",&produto);
    printf("Digite a quantidade a ser pedida: ");
    scanf("%f",&qnt);
    switch(produto){
    case 100:
        res=1.20*qnt;
        printf("O preco total e = %.2f",res);
        break;
    case 101:
        res=1.30*qnt;
        printf("O preco total e = %.2f",res);
        break;
    case 102:
        res=1.50*qnt;
        printf("O preco total e = %.2f",res);
        break;
    case 103:
        res=1.20*qnt;
        printf("O preco total e = %.2f",res);
        break;
    case 104:
        res=1.70*qnt;
        printf("O preco total e = %.2f",res);
        break;
    case 105:
        res=2.20*qnt;
        printf("O preco total e = %.2f",res);
        break;
    case 106:
        res=1.00*qnt;
        printf("O preco total e = %.2f",res);
        break;
    default:
        printf("Codigo do produto invalido");
    }

    return 0;
}
