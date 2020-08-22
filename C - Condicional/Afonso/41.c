#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float peso,altura,imc;

    printf("Peso: ");
    scanf("%f", &peso);

    printf("Altura: ");
    scanf("%f",&altura);

    imc = peso / (altura*altura);

    if (imc<=18.5)
    {
        printf("Abaixo do Peso");
    }
    else if (imc>=18.6 && imc<=24.9)
    {
        printf("Saudavel");
    }
    else if (imc>=25 && imc<=29.9)
    {
        printf("Peso em excesso");
    }
    else if (imc>=30 && imc<=34.9)
    {
        printf("Obesidade Grau I");
    }
    else if (imc>=35 && imc<=39.9)
    {
        printf("Obesidade Grau II (severa)");
    }
    else
    {
        printf("Obesidade Grau III (morbida)");
    }
    
    return 0;
}