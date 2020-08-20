#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float imposto,prod,res;
    int est;
    printf("Digite o valor do produto: ");
    scanf("%f",&prod);
    printf("Escolha a cidade de destino!\n");
    printf("1 - MG\n");
    printf("2 - SP\n");
    printf("3 - RJ\n");
    printf("4 - MS\n");
    scanf("%d",&est);
    switch(est){
    case 1:
        imposto = prod*0.07;
        res = prod+imposto;
        printf("O valor final do produto e = %.2f",res);
        break;
    case 2:
        imposto = prod*0.12;
        res = prod+imposto;
        printf("O valor final do produto e = %.2f",res);
        break;
    case 3:
        imposto = prod*0.15;
        res = prod+imposto;
        printf("O valor final do produto e = %.2f",res);
        break;
    case 4:
        imposto = prod*0.08;
        res = prod+imposto;
        printf("O valor final do produto e = %.2f",res);
        break;
    default:
        printf("Estado invalido");
    }

    return 0;
}
