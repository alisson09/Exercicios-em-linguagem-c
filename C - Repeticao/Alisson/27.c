#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float n,i,soma=1;
    printf("Digite um numero: ");
    scanf("%f",&n);
    if(n>0){
    for(i=1;i<=n;i++){
        soma+=(1.0/i);
    }
    printf("a soma da serie harmonica e = %.2f",soma);
    }else{
        printf("Numero invalido!");
    }

    return 0;
}

