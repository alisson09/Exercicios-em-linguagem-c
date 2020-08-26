#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int valor, menor, maior, maiorA=0, menorA=0;
    for (int i = 1; i <= 10; i++)
    {
        printf("Valor %d: ", i);
        scanf("%d", &valor);
        
        if (valor > maiorA) {
            maiorA = valor;
        }
        if (menor < menorA) {
            menorA = menor;
        }

        maior = valor;
        menor = valor;
    }
    printf("Maior: %d\n", maiorA);
    printf("Menor: %d", menorA);
    return 0;
}