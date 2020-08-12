#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float valor1,valor2,valor3,soma;

    printf("Valor 1: ");
    scanf("%f",&valor1);

    printf("Valor 2: ");
    scanf("%f",&valor2);

    printf("Valor 3: ");
    scanf("%f",&valor3);

    soma = (valor1*valor1)+(valor2*valor2)+(valor3*valor3);
    printf("Soma dos quadrados: %0.2f",(soma));
    return 0;
}
