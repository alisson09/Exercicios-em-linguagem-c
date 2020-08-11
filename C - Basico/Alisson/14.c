#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main (){
    float g,r;
    printf("Digite um angulo em graus: ");
    scanf("%f",&g);
    r = g*pi/180;
    printf("o angulo em radianos e %.2f",r);

    return 0;
}
