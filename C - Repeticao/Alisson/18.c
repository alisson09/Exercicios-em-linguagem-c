#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i,n,cont=1,maior=0,x;
    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Erro!");
    }else{
    for(i=0;i<n;i++){
        printf("Digite o %do numero: ",i+1);
        scanf("%d",&x);
        if(x>maior){
            maior = x;
        }else if(x==maior){
            cont++;
        }
      }
    }
    printf("O maior numero digitado e = %d e ele foi digitado %d vezes",maior,cont);
    return 0;
}

