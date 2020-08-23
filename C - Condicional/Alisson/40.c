#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float carro,imposto,distribuidor,vf;
    int mes;
    printf("Digite o valor do carro: ");
    scanf("%f",&carro);
    if(carro <= 12000){
        imposto = 0;
        distribuidor = carro*0.05;
        vf = carro+imposto+distribuidor;
    }else if(carro > 12000 && carro <= 25000){
        imposto = carro*0.15;
        distribuidor = carro*0.10;
        vf = carro+imposto+distribuidor;
    }else if(carro > 25000){
        imposto = carro*0.20;
        distribuidor = carro*0.15;
        vf = carro+imposto+distribuidor;
    }
        printf("O custo final do consumidor e = %.2f",vf);


    return 0;
}
