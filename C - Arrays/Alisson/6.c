#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int i,A[10],maior=0,menor=0;
    for(i=0;i<10;i++){
        printf("Digite o %do valor: ",i+1);
        scanf("%d",&A[i]);
        if(menor==0){
            menor=A[i];
        }else if(A[i]<menor){
            menor = A[i];
        }
        if(maior==0){
           maior=A[i];
        }else if(A[i]>maior){
            maior=A[i];
        }
    }
    printf("Maior numero lido: %d\n",maior);
    printf("Menor numero lido: %d",menor);
    return 0;
}
