#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float h, peso;
    char sexo;
    printf("Altura: ");
    scanf("%f", &h);

    printf("Sexo (M/F): ");
    scanf("%s", &sexo);

    if (sexo=='F' || sexo=='f' || sexo=='M' || sexo=='m')
    {
        if(sexo=='F' || sexo=='f')
        {
            peso = (62.1 * h) - 44.7;
            printf("Peso ideal: %0.2f", peso);
        }
        else
        {
            peso = (72.7 * h) - 58;
            printf("Peso ideal: %0.2f", peso);
        }
    }
    else
    {
        printf("Sexo invalido");
    }
    
    return 0;
}
