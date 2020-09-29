#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[10] = {170,150,160,196,183,180,167,165,174,191};
    int maior = b[0], menor = b[0], posMenor, posMaior;

    for (int i = 0; i < 10; i++)
    {
        if (b[i]>maior)
        {
            maior = b[i];
            posMaior = a[i];
        }
        if (b[i]<menor)
        {
            menor = b[i];
            posMenor = a[i];
        }
    }
    printf("Maior Altura: %d cm \t Aluno: %d\n", maior, posMaior);
    printf("Menor Altura: %d cm \t Aluno: %d\n", menor, posMenor);
    
    return 0;
}