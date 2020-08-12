#include <stdio.h>
#include <stdlib.h>

int main (){
    float a,b,c,d,e;
    printf("Digite quatro notas: ");
    scanf("%f %f %f %f",&a,&b,&c,&d);
    e = (a+b+c+d)/4;
    printf("a media aritmetica e %.2f",e);

    return 0;
}
