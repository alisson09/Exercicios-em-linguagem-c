/* ERRADO */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float n,i,soma=1,fat=1,j;
    printf("Digite um numero: ");
    scanf("%f",&n);
    if(n>0){
    for(i=1;i<=n;i++){
        for(j=n;j>1;j--){
            fat=fat*j;
            soma+=(1.0/fat);
        }
    }
    }else{
        printf("Numero invalido!");
    }
    printf("a soma da serie harmonica e = %.2f",soma);

    return 0;
}

