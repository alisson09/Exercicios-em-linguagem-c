#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int opcao;
    printf("Escolha uma opcao de conversao\n");
    printf("1: KM/H para M/S\n");
    printf("2: M/S para KM/H\n");
    printf("3: Finalizar programa\n");
    do
    {
        printf("Opcao desejada: ");
        scanf("%d",&opcao);

        
    } while (opcao==3);
    printf("Programa Finalizado");
    return 0;
}