#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x,y,z,num;
    float geometrica, harmonica,numx,numy,numz;

    printf("Numero inteiro positivo 1: ");
    scanf("%d",&x);

    printf("Numero inteiro positivo 2: ");
    scanf("%d",&y);

    printf("Numero inteiro positivo 3: ");
    scanf("%d",&z);

    printf("Escolha o tipo de media: \n(1) Geometrica\n(2) Ponderada\n(3) Harmonica\n(4) Aritmetica\nMedia escolhida: ");
    scanf("%d",&num);

    if(num==1)
    {
        geometrica = cbrt((x*y*z));
        printf("Resultado da Media Geometrica: %0.2f", geometrica);
    }
    else if(num==2)
    {
        printf("Resultado da Media Ponderada: %d", (((x+(2*y)+(3*z))/6)) );
    }
    else if(num==3)
    {
        numx = x;
        numy = y;
        numz = z;
        harmonica =  (3/((1/numx)+(1/numy)+(1/numz))) ;
        printf("Resultado da Media Harmonica: %0.2f", harmonica);
    }
    else if(num==4){
        printf("Resultado da Media Aritmetica: %d", ((x+y+z)/3) );
    }
    else{
        printf("Tipo de media escolhida esta incorreto");
    }

    return 0;
}
