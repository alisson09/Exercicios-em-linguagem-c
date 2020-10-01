#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int v[6],i, j, somaPar=0,somaImpar=0;
    srand(time(NULL));

    for (i = 0; i < 6; i++){
        printf("Digite um numero: ");
        scanf("%d",&v[i]);
    }
    printf("\n");
    for(j=0;j<6;j++){
        if(v[j]%2==0){
            printf("E par: %d\n",v[j]);
            somaPar+=v[j];
        }else{
            printf("E impar: %d\n",v[j]);
            somaImpar+=v[j];
        }
    }
    printf("A soma dos numeros pares e: %d\n",somaPar);
    printf("A soma dos numeros impares e: %d",somaImpar);

    return 0;
}
