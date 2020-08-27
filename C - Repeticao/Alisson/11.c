#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i,n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Erro!");
    }else{
    for(i=0;i<=n;i++){
        printf("%d\n",i);
     }
    }
    return 0;
}

