#include <stdio.h>
#include <stdlib.h>

int main (){
    float prem,ap1,ap2,ap3,apt,por1,por2,por3,g1,g2,g3;
    printf("Digite o valor do premio: ");
    scanf("%f",&prem);
    printf("Digite o valor do investimento do apostador 1: ");
    scanf("%f",&ap1);
    printf("Digite o valor do investimento do apostador 2: ");
    scanf("%f",&ap2);
    printf("Digite o valor do investimento do apostador 3: ");
    scanf("%f",&ap3);
    apt = ap1+ap2+ap3;
    por1 = ap1/apt;
    por2 = ap2/apt;
    por3 = ap3/apt;
    g1 = prem*por1;
    g2 = prem*por2;
    g3 = prem*por3;
    printf("A porcentagem investida pelo apostador 1 e = %.0f%% e o premio e = %.2f\n",(por1*100),g1);
    printf("A porcentagem investida pelo apostador 2 e = %.0f%% e o premio e = %.2f\n",(por2*100),g2);
    printf("A porcentagem investida pelo apostador 3 e = %.0f%% e o premio e = %.2f",(por3*100),g3);

    return 0;
}
