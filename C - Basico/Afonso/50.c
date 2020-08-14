#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int ano,ida;
    printf("Ano atual: ");
    scanf("%d",&ano);
    printf("Idade: ");
    scanf("%d",&ida);
    printf("Ano de Nascimento: %d",(ano-ida));
    return 0;
}