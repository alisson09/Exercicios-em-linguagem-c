#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int n,i,num=0;
    printf("Digite um numero: ");
    scanf("%d",&n);
    for(i=n;i++;){
        if(i%11==0 || i%13==0 || i%17==0){
            num=i;
            printf("O primeiro numero que e multiplo de 11, 13 ou 17 a partir de %d e = %d\n",n,num);
            exit(1);
        }
    }

    return 0;
}

