#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int n,cont=0,num=0;
    do{
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
       if(n%2==0){
        cont++;
       }
       num++;
    }while(n!=1000);
    printf("Foram lidos %d numeros pares e o total de numero digitados e = %d ",cont,num);

    return 0;
}

