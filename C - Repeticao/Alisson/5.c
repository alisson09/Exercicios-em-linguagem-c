#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i,soma=0,n;
    for(i=0;i<10;i++){
        printf("digite o %do numero: ",i+1);
        scanf("%d",&n);
        soma = soma + n;
    }
    printf("A soma dos numeros digitados e = %d",soma);
    return 0;
}

