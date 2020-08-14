#include <stdio.h>
#include <stdlib.h>

int main (){
    int altDeg,altDes,altF;
    printf("Digite a altura do degrau em cm: ");
    scanf("%d",&altDeg);
    printf("Digite a altura que deseja alcançar em cm: ");
    scanf("%d",&altDes);
    altF = altDes/altDeg;
    printf("Para atingir a altura desejada e necessario subir %d degraus\n",altF);

    return 0;
}
