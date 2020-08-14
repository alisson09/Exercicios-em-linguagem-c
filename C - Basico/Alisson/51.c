#include <stdio.h>
#include <stdlib.h>

int main (){
    float x,y,d;
    printf("Digite a coordenada x: ");
    scanf("%f",&x);
    printf("Digite a coordenada y: ");
    scanf("%f",&y);
    d = sqrt( pow(x,2) + pow(y,2) );
    printf("A distancia da origem e %.2f",d);

    return 0;
}
