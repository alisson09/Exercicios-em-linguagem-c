#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int opcao, i;
    float v[8] = {2.5, 5, 3, 7.5, 4, 15, 3.7, 9};

    printf("------- Escolha uma opcao -------\n");
    printf("0 - Finaliza programa\n");
    printf("1 - Vetor ordem direta\n");
    printf("2 - Vetor ordem inversa\n");
    printf("Opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 0:
        printf("Finalizando o programa!");
        exit(1);
        break;
    case 1:
        for (i = 0; i < 5; i++)
        {
            printf("%.1f ", v[i]);
        }
        break;
    case 2:
        for (i = 4; i >= 0; i--)
        {
            printf("%.1f ", v[i]);
        }
        break;
    default:
        printf("Codigo invalido!");
        break;
    }
    return 0;
}