#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i,n;
    printf("Digite um numero inteiro positivo impar: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("Erro!");
    }else{
    for(i=n;i>=1;i--){
        if(i%2!=0){
        printf("%d\n",i);
        }
      }
    }
    return 0;
}

