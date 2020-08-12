#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main (){
    float r,area;
    printf("Digite do raio do circulo: ");
    scanf("%f",&r);
    area = pi*(r*r);
    printf("a area do circulo e = %.2f",area);

    return 0;
}
