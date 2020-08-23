#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float salario,bonus;
    int mes;
    printf("Digite o salario atual: ");
    scanf("%f",&salario);
    printf("Digite o tempo trabalhado em meses: ");
    scanf("%d",&mes);
    if(mes>0 && mes < 12){
        bonus = 0;
    }else if(mes >= 12 && mes <= 36 ){
        bonus = 100;
    }else if(mes >= 48 && mes <= 72 ){
        bonus = 200;
    }else if(mes >= 84 && mes <= 120 ){
        bonus = 300;
    }else{
        bonus = 500;
    }
    if(salario <= 500){
        salario = salario+(salario*0.25)+bonus;
    }else if(salario > 500 && salario <= 1000){
        salario = salario+(salario*0.20)+bonus;
    }else if(salario > 1000 && salario <= 1500){
        salario = salario+(salario*0.15)+bonus;
    }else if(salario > 1500 && salario <= 2000){
        salario = salario+(salario*0.10)+bonus;
    }else{
        salario = salario+bonus;
    }
    if(salario>2000 && mes<12){
        printf("Nao havera reajuste no salario");
    }else{
        printf("O salario apos o reajuste e = %.2f",salario);
    }

    return 0;
}
