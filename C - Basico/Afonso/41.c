#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    float numHora, valorHora, salario;
    printf("Valor da hora de trabalho: ");
    scanf("%f",&valorHora);
    printf("Numero de horas trabalhadas: ");
    scanf("%f",&numHora);
    salario = valorHora*numHora;
    printf("Quantia a ser paga: %0.2f", (salario+(salario*0.10)));
    return 0;
}