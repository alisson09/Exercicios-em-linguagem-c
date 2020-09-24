#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int i,A[10] = {2,1,3,4,-9,6,12,8,20,10},menor=A[0],maior=A[0];
    for(i=0;i<10;i++){
        if(A[i]<menor){
            menor=A[i];
        }
        if(A[i]>maior){
            maior=A[i];
        }
    }
    printf("Maior numero lido: %d\n",maior);
    printf("Menor numero lido: %d",menor);
    return 0;
}
