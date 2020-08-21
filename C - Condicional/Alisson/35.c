#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int dia,mes,ano;
    printf("Digite um dia: ");
    scanf("%d",&dia);
    printf("Digite um mes de 1 a 12: ");
    scanf("%d",&mes);
    printf("Digite um ano: ");
    scanf("%d",&ano);
    switch(mes){
    case 1:
        if(dia >= 1 && dia <= 31){
            printf("Data valida");
        }else{
            printf("Data invalida");
        }
        break;
    case 2:
        if(ano%4==0 && dia >=1 && dia <=29){
            printf("Data valida");
        }else if(ano%4!=0 && dia >=1 && dia <= 28){
            printf("Data valida");
        }else if(ano%4==0 && dia > 29){
            printf("Data invalida");
        }else if(ano%4!=0 && dia > 28){
            printf("Data invalida");
        }else if(dia < 1){
            printf("Data invalida");
        }
        break;
    case 3:
        if(dia >= 1 && dia <= 31){
            printf("Data valida");
        }else{
            printf("Data invalida");
        }
        break;
    case 4:
        if(dia >= 1 && dia <= 31){
            printf("Data valida");
        }else{
            printf("Data invalida");
        }
        break;
    case 5:
        if(dia >= 1 && dia <= 31){
            printf("Data valida");
        }else{
            printf("Data invalida");
        }
        break;
    case 6:
        if(dia >= 1 && dia <= 31){
            printf("Data valida");
        }else{
            printf("Data invalida");
        }
        break;
    case 7:
        if(dia >= 1 && dia <= 31){
            printf("Data valida");
        }else{
            printf("Data invalida");
        }
        break;
    case 8:
        if(dia >= 1 && dia <= 31){
            printf("Data valida");
        }else{
            printf("Data invalida");
        }
        break;
    case 9:
        if(dia >= 1 && dia <= 31){
            printf("Data valida");
        }else{
            printf("Data invalida");
        }
        break;
    case 10:
        if(dia >= 1 && dia <= 31){
            printf("Data valida");
        }else{
            printf("Data invalida");
        }
        break;
    case 11:
        if(dia >= 1 && dia <= 31){
            printf("Data valida");
        }else{
            printf("Data invalida");
        }
        break;
    case 12:
        if(dia >= 1 && dia <= 31){
            printf("Data valida");
        }else{
            printf("Data invalida");
        }
        break;
    default:
           printf("Data invalida");
    }

    return 0;
}
