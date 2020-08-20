#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a,b,c,delta,x1,x2;

    printf("Valor de A: ");
    scanf("%f",&a);

    if(a==0){
        printf("Nao e equacao de segundo grau.\nA tem que ser diferente de zero.\n");
    }
    else{
        printf("Valor de B: ");
        scanf("%f",&b);
        printf("Valor de C: ");
        scanf("%f",&c);

        delta = (b*b)-(4*a*c);
        printf("Delta = %0.0f\n",delta);

        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        if (delta<0)
        {
            printf("Nao existe raiz\n");
        }
        else if (delta>0)
        {
            printf("Duas raizes \nRaiz 1 = %0.1f \nRaiz 2 = %0.1f",x1,x2);
        }
        else
        {
            printf("Raiz unica \nRaiz = %0.0f",x1);
        }
    }
    return 0;
}
