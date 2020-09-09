#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int n,i,soma=0,vi,vf;
    printf("Digite o valor inicial: ");
    scanf("%d",&vi);
    printf("Digite o valor final: ");
    scanf("%d",&vf);
    if(vi>vf){
        printf("Intervalo de valores invalido");
    }else{
        for(i=vi;i<=vf;i++){
            if(i%2!=0){
                soma+=i;
            }
        }
        printf("A soma dos numeros impares no intervalo de %d a %d e = %d",vi,vf,soma);
    }



    return 0;
}
