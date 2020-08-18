#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a,res;
    printf("Digite um numero inteiro: ");
    scanf("%d",&a);
    if(a>0){
        res = log(a);
        printf("O logaritmo do numero digitado e = %d",res);
    }else{
        printf("Numero invalido");
    }

    return 0;
}
