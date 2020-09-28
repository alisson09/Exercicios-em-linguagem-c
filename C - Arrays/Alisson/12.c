#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int v[5],maior=0,menor=0;
    float media=0;
    for (int i = 0; i < 5; i++){
        printf("Digite o %do numero: ",i+1);
        scanf("%d",&v[i]);
        if(maior==0){
            maior=v[i];
        }else if(v[i]>maior){
            maior=v[i];
        }
        if(menor==0){
            menor=v[i];
        }else if(v[i]<menor){
            menor=v[i];
        }
        media+=v[i];
    }
    for(int j=0;j<5;j++){
        printf("Vetor[%d]: %d\n",j+1,v[j]);
    }
    printf("Maior: %d\n",maior);
    printf("Menor: %d\n",menor);
    printf("Media: %.2f",(media/5));

    return 0;
}
