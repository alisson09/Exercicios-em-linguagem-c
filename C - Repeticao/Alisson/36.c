#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i,j,n,soma=0,soma1=0,res,dif;
    for(i=1;i<=100;i++){
        soma+=(i*i);
    }
    for(j=1;j<=100;j++){
        soma1+=j;
    }
    res=soma1*soma1;
    dif=res-soma;
    printf("A diferenca entre a soma dos quadrados dos primeiros 100 numeros naturais e o quadrado da soma e = %d",dif);
    return 0;
}

