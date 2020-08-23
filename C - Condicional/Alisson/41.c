#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float peso,altura,imc;
    printf("Digite o peso: ");
    scanf("%f",&peso);
    printf("Digite a altura em metros: ");
    scanf("%f",&altura);
    imc = peso/(altura*altura);
    if(imc <= 18.5){
        printf("Abaixo do Peso");
    }else if(imc > 18.5 && imc <= 24.9){
        printf("Saudavel");
    }else if(imc >= 25.0 && imc <= 29.9){
        printf("Peso em excesso");
    }else if(imc >= 30.0 && imc <= 34.9){
        printf("Obesidade Grau I");
    }else if(imc >= 35.0 && imc <= 39.9){
        printf("Obesidade Grau II(severa)");
    }else if(imc >= 40){
        printf("Obesidade Grau III(morbida)");
    }
    return 0;
}
