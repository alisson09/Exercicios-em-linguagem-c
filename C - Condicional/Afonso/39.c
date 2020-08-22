#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float salario, bonus;
    int tempo;

    printf("Salario atual: ");
    scanf("%f",&salario);

    printf("Tempo de Servico (em meses): ");
    scanf("%d",&tempo);

    if (tempo>120)
    {
        bonus = 500;
    }
    else if (tempo>=73 && tempo<=120)
    {
        bonus = 300;
    }
    else if (tempo>=37 && tempo<=72)
    {
        bonus = 200;
    }
    else if (tempo>=12 && tempo<=36)
    {
        bonus = 100;
    }
    else
    {
        bonus = 0;
    }
    
    if (salario<=500)
    {
        salario = salario + (salario*0.25) + bonus;
    }
    else if (salario<=1000)
    {
        salario = salario + (salario*0.20) + bonus;
    }
     else if (salario<=1500)
    {
        salario = salario + (salario*0.15) + bonus;
    }
     else if (salario<=2000)
    {
        salario = salario + (salario*0.10) + bonus;
    }
    else
    {
        salario = salario + bonus;
    }

    if ((salario>2000)&&(tempo<12))
    {
        printf("Sem direito a reajuste");
    }
    else
    {
        printf("Salario reajustado: %0.2f",salario);
    }

    return 0;
}