#include <stdio.h>
#include <stdlib.h>

int main (){
    int seg,hrs,min,sec,hrs1,min1,seg1;
    printf("A experiencia iniciou as:\n");
    printf("Hora(s): ");
    scanf("%d",&hrs);
    printf("Minuto(s): ");
    scanf("%d",&min);
    printf("Segundo(s): ");
    scanf("%d",&seg);
    printf("Digite o tempo de duracao da experiencia em segundos: ");
    scanf("%d",&sec);
    hrs1 = hrs + sec/3600;
    min1 = min + (sec/60)%60;
    seg1 = seg + sec%60;
    printf("O horario de termino da experiencia e %d horas %d minutos %d segundos",hrs1,min1,seg1);

    return 0;
}
