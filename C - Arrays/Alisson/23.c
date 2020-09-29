#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    float a[5] = {1.5,2.5,3.5,4,5};
    float b[5] = {6.5,7,8,9.5,10};
    float soma=0;
    int i;
    for (i = 0; i < 5; i++){
        soma+=(a[i]*b[i]);
        printf("Vet A: %.1f\t",a[i]);
        printf("\tVet B: %.1f\n",b[i]);
    }
        printf("\nProduto escalar: %.2f",soma);

    return 0;
}
