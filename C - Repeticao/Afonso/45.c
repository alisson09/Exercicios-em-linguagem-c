#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int opcao;
    float velocidade;

    printf("=======================\n");
    printf("Escolha uma opcao de conversao\n");
    printf("1: KM/H para M/S\n");
    printf("2: M/S para KM/H\n");
    printf("3: Finalizar programa\n");
    printf("=======================\n");
    do
    {
        printf("Opcao desejada: ");
        scanf("%d",&opcao);

        if (opcao==1 || opcao==2)
        {
            printf("Velocidade: ");
            scanf("%f",&velocidade);
            if (opcao==1)
            {
                printf("%0.2f KM/H = %0.2f M/S\n",velocidade,(velocidade/3.6));
            }
            else
            {
                printf("%0.2f M/S = %0.2f KM/H\n",velocidade,(velocidade*3.6));
            }
        }
        else
        {
            printf("Opcao Invalida\n");
        }
    } while (opcao!=3);
    printf("Programa Finalizado");
    return 0;
}