#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int n,i,soma=0;
    for(i=0;i<1000;i++){
        if(i%3==0 || i%5==0){
            soma+=i;
        }
    }
    printf("A soma dos numeros naturais abaixo de 1000 e = %d",soma);

    return 0;
}

