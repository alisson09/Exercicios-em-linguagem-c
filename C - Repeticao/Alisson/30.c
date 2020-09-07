#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* -----1------*/
int main (){
    int n,i,soma=0;
    printf("Digite um numero: ");
    scanf("%d",&n);
    if(n>0){
    for(i=1;i<=n;i++){
        soma+=i;
    }
    printf("O resultado da soma e = %d",soma);
    }else{
        printf("Numero invalido!");
    }

    return 0;
}
/* -----3------*/
int main (){
    int n,i,soma=0;
    printf("Digite um numero: ");
    scanf("%d",&n);
    if(n>0){
    for(i=1;i<=n;i=i+2){
        soma+=i;
    }
    printf("O resultado da soma e = %d",soma);
    }else{
        printf("Numero invalido!");
    }

    return 0;
}

