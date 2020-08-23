#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define anoAtual 2008

int main (){
    int ano,dia,mes;
    printf("Digite a data de nascimento\n");
    printf("Dia: ");
    scanf("%d",&dia);
    printf("Mes: ");
    scanf("%d",&mes);
    printf("Ano: ");
    scanf("%d",&ano);

    if((dia>0 && dia<32) && (mes>0 && mes<13) && (ano<=anoAtual)){
        if(dia <= 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)){
            printf("Data valida");
        }else if(dia <= 31 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)){
            printf("Data valida");
        }else{
            if(dia <= 29 && mes == 2 && ano%4 == 0){
            printf("Data valida");
        }else if(dia <= 28 && mes == 2 && ano%4 != 0){
            printf("Data valida");
        }else{
            printf("Data invalida");
        }
      }
    }else{
        printf("Data invalida");
    }

    return 0;
}
