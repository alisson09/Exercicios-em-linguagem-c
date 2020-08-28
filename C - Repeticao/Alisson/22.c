#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int n,soma=0;
    float media=0,cont=0;
    do{
    printf("Digite uma nota entre 10 e 20: ");
    scanf("%d",&n);
    if(n>=10 && n<=20){
        soma=soma+n;
        cont++;
    }else{
        printf("Numero invalido\n");
    }
    }while(n>=10 && n<=20);
    media = soma/cont;
    printf("A media e = %.2f ",media);

    return 0;
}

