#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float venda,aum,com;
    printf("Digite o valor da venda: ");
    scanf("%f",&venda);
    if(venda >= 100000){
        aum = venda*0.16;
        com = 700+aum;
        printf("A comissao da venda e = %.2f",com);
    }else if(venda < 100000 && venda >= 80000){
        aum = venda*0.14;
        com = 650+aum;
        printf("A comissao da venda e = %.2f",com);
    }else if(venda < 80000 && venda >= 60000){
        aum = venda*0.14;
        com = 600+aum;
        printf("A comissao da venda e = %.2f",com);
    }else if(venda < 60000 && venda >= 40000){
        aum = venda*0.14;
        com = 550+aum;
        printf("A comissao da venda e = %.2f",com);
    }else if(venda < 40000 && venda >= 20000){
        aum = venda*0.14;
        com = 500+aum;
        printf("A comissao da venda e = %.2f",com);
    }else if(venda < 20000){
        aum = venda*0.14;
        com = 400+aum;
        printf("A comissao da venda e = %.2f",com);
    }

    return 0;
}
