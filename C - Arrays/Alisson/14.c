#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int v[10],i,j;
    for (i = 0; i < 10; i++){
        printf("Digite o %do numero: ",i+1);
        scanf("%d",&v[i]);
    }
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++){
            if (v[i] == v[j]){
                printf("Sao iguais os numeros: %d\n", v[i]);

            }
        }
    }
    return 0;
}
