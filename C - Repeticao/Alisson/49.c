#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    float scar,sjoao,mes=0,rcar,rjoao,poup,renda;
    printf("Digite o salario que Carlos recebe: ");
    scanf("%f",&scar);
    sjoao=scar/3;
    printf("O salario de Joao e: R$%.0f\n",sjoao);
    rcar=scar;
    rjoao=sjoao;
    printf("Digite a porcentagem de lucro da poupanca: ");
    scanf("%f",&poup);
    printf("Digite a porcentagem de lucro da renda fixa: ");
    scanf("%f",&renda);
    poup=poup/100;
    renda=renda/100;
    do{
        rcar+=(scar*poup);
        rjoao+=(sjoao*renda);
        mes++;
    }while(rcar>rjoao);
    printf("Foi necessario %.0f mes(es) para Joao passar Carlos no valor de sua aplicacao\n",mes);
    printf("Rendimento do Carlos: R$%.2f\n",rcar);
    printf("Rendimento do Joao: R$%.2f",rjoao);

    return 0;
}
