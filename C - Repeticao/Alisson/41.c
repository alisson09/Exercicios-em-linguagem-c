#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int r1,r2,res;
    do{
        printf("Digite o valor do R1: ");
        scanf("%d",&r1);
        printf("Digite o valor do R2: ");
        scanf("%d",&r2);
        res=(r1*r2)/(r1+r2);
    } while (res!=0);
    printf("Resistencia = %d\n",res);
    return 0;
}
