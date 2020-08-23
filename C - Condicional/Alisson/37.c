#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int horaChegada,minutoChegada,horaSaida,minutoSaida,horaTotal,minutoTotal;
    float preco;
    printf("Digite o horario de chegada\n");
    printf("Hora: ");
    scanf("%d",&horaChegada);
    printf("Minuto: ");
    scanf("%d",&minutoChegada);
    printf("Digite o horario de saida\n");
    printf("Hora: ");
    scanf("%d",&horaSaida);
    printf("Minuto: ");
    scanf("%d",&minutoSaida);

    if(horaChegada > horaSaida){
        horaSaida = horaSaida +24;
    }
    if(minutoChegada > minutoSaida){
        minutoSaida = minutoSaida + 60;
        horaSaida = horaSaida - 1;
    }
    horaTotal = horaSaida - horaChegada;
    minutoTotal = minutoSaida - minutoChegada;
    if( horaTotal >= 1 ){
        if (minutoTotal>1) {
            printf("O carro ficou estacionado por %d horas e %d minutos\n",horaTotal, minutoTotal);
        }else{
            printf("O carro ficou estacionado por %d horas\n",horaTotal);
        }
    }
    else{
        printf("O carro ficou estacionado por %d minutos\n",minutoTotal);
    }
    minutoTotal = (horaTotal*60) + minutoTotal;
    if(minutoTotal <= 120){
        if(minutoTotal <= 60){
            preco = 1.0;
            printf("O preco total e = %.2f reais",preco);
        }else{
            preco = 2.0;
            printf("O preco total e = %.2f reais",preco);
        }
    }
    else if(minutoTotal <= 240){
        if(minutoTotal <= 180){
            preco = 3.40;
            printf("O preco total e = %.2f reais",preco);
        }else{
            preco = 4.80;
            printf("O preco total e = %.2f reais",preco);
        }
    }
    else{
        horaTotal = (minutoTotal / 60) - 4;
        preco = 4.80 + (horaTotal * 2);
        printf("O preco total e = %.2f reais",preco);
    }

    return 0;
}
