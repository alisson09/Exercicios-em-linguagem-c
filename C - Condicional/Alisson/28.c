#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float x,y,z,res;
    int esc;
    printf("Escolha os tres numeros a serem calculados: ");
    scanf("%f %f %f",&x,&y,&z);
    printf("Escolha a media a ser calculada!\n");
    printf("1 - Geometrica\n");
    printf("2 - Ponderada\n");
    printf("3 - Harmonica\n");
    printf("4 - Aritmetica\n");
    scanf("%d",&esc);
    switch(esc){
    case 1:
        res = cbrt(x*y*z);
        printf("O valor da media calculada e = %.2f",res);
        break;
    case 2:
        res = (x+(2*y)+(3*z))/6;
        printf("O valor da media calculada e = %.2f",res);
        break;
    case 3:
        res = 1/((1/x)+(1/y)+(1/z));;
        printf("O valor da media calculada e = %.2f",res);
        break;
    case 4:
        res = (x+y+z)/3;
        printf("O valor final do produto e = %.2f",res);
        break;
    default:
        printf("Estado invalido");
    }

    return 0;
}
