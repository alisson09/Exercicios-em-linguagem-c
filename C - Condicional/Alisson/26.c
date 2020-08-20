#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float dist,lit,res,consumo;
    printf("Digite a distancia percorrida em km: ");
    scanf("%f",&dist);
    printf("Digite a quantidade de gasolina consumida em litros: ");
    scanf("%f",&lit);
    consumo = dist/lit;
    if(consumo < 8){
        printf("Venda o carro!");
    }else if(consumo >= 8 && consumo < 12){
        printf("Economico!");
    }else if(consumo > 12){
        printf("Super economico!");
    }

    return 0;
}
