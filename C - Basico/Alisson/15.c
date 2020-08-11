#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main (){
    float g,r;
    printf("Digite um angulo em radianos: ");
    scanf("%f",&r);
    g = r*180/pi;
    printf("o angulo em graus e %.2f",g);

    return 0;
}
