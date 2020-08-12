#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float a,b,hip;
    printf("Digite o valor dos catetos do triangulo: ");
    scanf("%f %f",&a,&b);
    hip = sqrt((a*a)+(b*b));
    printf("a hipotenusa do triangulo e = %.2f",hip);

    return 0;
}
