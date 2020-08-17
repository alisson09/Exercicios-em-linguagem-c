#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float h,p;
    char sexo;
    printf("Digite o sexo da pessoa(M/F): ");
    scanf("%c",&sexo);
    printf("Digite a altura da pessoa em metros: ");
    scanf("%f",&h);
    if(sexo == 'm' || sexo == 'M'){
        p = (72.7*h)-58;
        printf("O peso ideal e = %.2f",p);
    }else if(sexo == 'f' || sexo == 'F'){
        p = (62.1*h)-44.7;
        printf("O peso ideal e = %.2f",p);
    }else{
        printf("Dados invalidos");
    }

    return 0;
}
