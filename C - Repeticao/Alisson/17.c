#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i,n,soma=0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Erro!");
    }else{
    for(i=0;i<=n;i++){
        printf("%d\n",i);
        soma+=i;
     }
    }
    printf("A soma dos primeiros numeros naturais e = %d",soma);
    return 0;
}

