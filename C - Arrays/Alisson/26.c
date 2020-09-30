#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int v[10], i, soma=0;
    float media=0,desvio,s=0;
    srand(time(NULL));
    printf("Numeros do vetor: \n");
    for(i=0;i<10;i++){
        v[i]=rand()%100;
        printf("%d\t\n",v[i]);
        soma+=v[i];
    }
    media=soma/10.0;
    for(i=0;i<10;i++){
        s=s+pow((v[i]-media),2);
    }
    desvio=sqrt((1/(10.0-1))*s);
    printf("O desvio padrao e: %.2f",desvio);

    return 0;
}
