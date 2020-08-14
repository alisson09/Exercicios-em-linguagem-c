#include <stdio.h>
#include <stdlib.h>

int main (){
    int seg,hrs,min;
    printf("Digite um valor em segundos: ");
    scanf("%d",&seg);
    hrs = seg/3600;
    min = seg/60;
    printf("O valor em horas e %d\n",hrs);
    printf("O valor em minutos e %d\n",min);
    printf("O valor em segundos e %d\n",seg);

    return 0;
}
