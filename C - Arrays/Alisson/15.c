#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int v[20], i,j;
    bool repete;

    for (i=0; i<20; i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &v[i]);
    }

    for (i=0;i<20;i++){
        repete = false;
        for (j=0; j<i;j++){
            if (v[i]==v[j]){
                repete=true;
                break;
            }
        }
        if(!repete){
            printf("%d ",v[i]);
        }
    }

    return 0;
}
