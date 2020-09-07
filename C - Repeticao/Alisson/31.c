#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float n,i,j,soma=0;
    for(i=1,j=1;i<100,j<=50;i=i+2,j++){
        soma += i/j;
    }
    printf("O resultado da soma e = %.2f",soma);

    return 0;
}

