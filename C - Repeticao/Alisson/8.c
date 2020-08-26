#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i,maior=0,menor=10000,n;
    float media;
    for(i=0;i<10;i++){
        printf("digite o %do numero: ",i+1);
        scanf("%d",&n);
        if(n>maior){
        maior = n;
        }else if(n<menor){
            menor = n;
        }
    }
    printf("O maior numero lido e = %d\n",maior);
    printf("O menor numero lido e = %d",menor);
    return 0;
}

