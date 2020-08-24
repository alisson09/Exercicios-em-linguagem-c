#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int horaChegada, minChegada, horaSaida, minSaida, horaTotal, minTotal;
    float preco;

    printf("Chegada (Hora/Min): ");
    scanf("%d %d",&horaChegada, &minChegada);

    printf("Saida (Hora/Min): ");
    scanf("%d %d",&horaSaida, &minSaida);

    if (horaChegada>horaSaida)
    {
        horaSaida = horaSaida + 24;
    }

    if (minChegada>minSaida)
    {
        minSaida = minSaida + 60;
        horaSaida = horaSaida - 1;
    }
    
    horaTotal = horaSaida - horaChegada;
    minTotal = minSaida - minChegada;

    if ( horaTotal >= 1 )
    {
        if (minTotal>1) {
            printf("O carro ficou estacionado por %d horas e %d minutos", horaTotal, minTotal);
        } else {
            printf("O carro ficou estacionado por %d horas", horaTotal);
        }
    }
    else
    {
        printf("O carro ficou estacionado por %d minutos", minTotal);
    }

    minTotal = (horaTotal*60) + minTotal;
    printf(". ");

    if (minTotal <= 120)
    {
        if (minTotal <= 60) {
            preco = 1.0;
            printf("Preco total: %0.2f",preco);
        } else {
            preco = 2.0;
            printf("Preco total: %0.2f",preco);
        }
    }
    else if (minTotal <= 240)
    {
        if (minTotal <= 180) {
            preco = 3.40;
            printf("Preco total: %0.2f",preco);
        } else {
            preco = 4.80;
            printf("Preco total: %0.2f",preco);
        }
    }
    else
    {
        horaTotal = (minTotal / 60) - 4;
        preco = 4.80 + (horaTotal * 2);
        printf("Preco total: %0.2f",preco);
    }

    return 0;
}