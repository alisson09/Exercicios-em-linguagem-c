#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i,soma=0;
    for(i=0;i<=50;i++){
        soma+=2*i;
    }
    printf("A soma dos 50 primeiro numero positivos e = %d",soma);
    return 0;
}

