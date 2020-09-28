#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    float v[10],soma=0,cont=0;
    for (int i = 0; i < 10; i++){
        printf("Digite o %do numero: ",i+1);
        scanf("%f",&v[i]);
        if(v[i]>=0){
            soma+=v[i];
        }else if(v[i]<0){
            cont++;
        }
    }
    printf("Soma dos numeros positivos: %.2f\n",soma);
    printf("Quantidade de numeros negativos: %.0f",cont);

    return 0;
}
