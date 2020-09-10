#include <math.h>
#include <stdio.h>
#include <math.h>

int main(){
    float altura,base,area;
    printf("Digite o valor da base: ");
    scanf("%f",&base);
    while(base<=0){
        printf("Digite um valor valido: ");
        scanf("%f",&base);
    }
    printf("Digite o valor da altura: ");
    scanf("%f",&altura);
    while(altura<=0){
        printf("Digite um valor valido: ");
        scanf("%f",&altura);
    }
    area=(base*altura)/2;
    printf("A area do triandulo e = %.2f",area);

    return 0;
}
