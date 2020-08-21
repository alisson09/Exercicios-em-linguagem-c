#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float altura,peso;
    printf("Altura: ");
    scanf("%f",&altura);
    printf("Peso: ");
    scanf("%f",&peso);
   
    if (altura<1.20)
    {
        if (peso<60)
        {
            printf("Categoria: A");
        }
        else if (peso>=60 && peso<=90)
        {
            printf("Categoria: D");
        }
        else
        {
            printf("Categoria: G");
        }
    }
    else if (altura>=1.20 && altura<=1.70)
    {
        if (peso<60)
        {
            printf("Categoria: B");
        }
        else if (peso>=60 && peso<=90)
        {
            printf("Categoria: E");
        }
        else
        {
            printf("Categoria: H");
        }
    }
    else
    {
        if (peso<60)
        {
            printf("Categoria: C");
        }
        else if (peso>=60 && peso<=90)
        {
            printf("Categoria: F");
        }
        else
        {
            printf("Categoria: I");
        }
    }
    return 0;
}

