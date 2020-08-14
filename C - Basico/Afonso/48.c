#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int temp,hora,segu,minu;
    printf("Tempo em segundos: ");
    scanf("%d",&temp);
    hora = temp / 3600;
    minu = (temp/60) % 60;
    segu = temp%60;
    printf("Sao %d hora(s) %d minuto(s) e %d segundo(s)",hora,minu,segu);
    return 0;
}