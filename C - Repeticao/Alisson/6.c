#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i,soma=0,n;
    float media;
    for(i=0;i<10;i++){
        printf("digite o %do numero: ",i+1);
        scanf("%d",&n);
        soma = soma + n;
    }
    media = soma/10.0;
    printf("A soma dos numeros digitados e = %d\n",soma);
    printf("A media e = %.2f",media);
    return 0;
}

