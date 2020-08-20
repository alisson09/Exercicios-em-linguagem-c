#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float a,b,c,delta,x1,x2,raizd;
    printf("Digite o valor de A: ");
    scanf("%f",&a);
    printf("Digite o valor de B: ");
    scanf("%f",&b);
    printf("Digite o valor de C: ");
    scanf("%f",&c);
    delta = (b*b)-(4*a*c);
    raizd = sqrt(delta);
    printf("Delta = %.2f\n",delta);
    printf("Raiz de delta = %.2f\n",raizd);
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);
    if(delta < 0) {
        printf("A equacao nao possui raizes reais");
    }else if (delta == 0){
        printf("Raiz = %.2f. Raiz unica!", x2);
    }else if(delta > 0){
        printf("O valor de x1: %.2f\n",x1);
        printf("O valor de x2: %.2f",x2);
    }

    return 0;
}
