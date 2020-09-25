#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int v[5],maior=0,menor=0,posMaior=0,posMenor=0;
    for (int i = 0; i < 5; i++){
        printf("Digite o %do numero: ",i+1);
        scanf("%d",&v[i]);
        if(maior==0){
            maior=v[i];
        }else if(v[i]>maior){
            maior=v[i];
            posMaior=i;
        }
        if(menor==0){
            menor=v[i];
        }else if(v[i]<menor){
            menor=v[i];
            posMenor=i;
        }
    }
    for(int j=0;j<5;j++){
        printf("Vetor[%d]: %d\n",j+1,v[j]);
    }
    printf("Posicao do maior numero lido: %d\n",posMaior+1);
    printf("Posicao do menor numero lido: %d\n",posMenor+1);

    return 0;
}
