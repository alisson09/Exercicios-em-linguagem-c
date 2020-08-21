#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float nota,falta;
    printf("Digite a nota do aluno: ");
    scanf("%f",&nota);
    printf("Digite o numero de faltas: ");
    scanf("%f",&falta);
    if(nota >= 9 && nota <= 10 && falta <= 20){
        printf("Conceito A");
    }else if(nota >= 9 && nota <= 10 && falta > 20){
        printf("Conceito B");
    }else if(nota >= 7.5 && nota <= 8.9 && falta <= 20){
        printf("Conceito B");
    }else if(nota >= 7.5 && nota <= 8.9 && falta > 20){
        printf("Conceito C");
    }else if(nota >= 5.0 && nota <= 7.4 && falta <= 20){
        printf("Conceito C");
    }else if(nota >= 5.0 && nota <= 7.4 && falta > 20){
        printf("Conceito D");
    }else if(nota >= 4.0 && nota <= 4.9 && falta <= 20){
        printf("Conceito D");
    }else if(nota >= 4.0 && nota <= 4.9 && falta > 20){
        printf("Conceito E");
    }else if(nota >= 0.0 && nota <= 3.9 && falta <= 20){
        printf("Conceito E");
    }else if(nota >= 0.0 && nota <= 3.9 && falta > 20){
        printf("Conceito E");
    }else if(nota > 10 || nota < 0){
        printf("Nota invalida");
    }

    return 0;
}
