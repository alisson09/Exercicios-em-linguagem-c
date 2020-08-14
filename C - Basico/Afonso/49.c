#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int dura,hora,segu,minu,hora2,minu2,segu2;
    printf("Duracao da experiencia: ");
    scanf("%d",&dura);

    printf("Inicio em...\n");
    printf("Hora(s): ");
    scanf("%d",&hora);
    printf("Minuto(s): ");
    scanf("%d",&minu);
    printf("Segundo(s): ");
    scanf("%d",&segu);

    hora2 = hora + dura / 3600;
    minu2 = minu + (dura/60) % 60;
    segu2 = segu + dura%60;
    //codigo sem operador ou funcao que defina um horario a partir da meia noite (24:00 ou 00:00)       
    printf("Termino da experiencia as %d hora(s) %d minuto(s) e %d segundo(s)",hora2,minu2,segu2);
    return 0;
}