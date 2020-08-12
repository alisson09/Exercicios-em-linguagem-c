#include <stdio.h>
#include <stdlib.h>

int main (){
    float a,b,c,d;
    printf("Digite tres valores: ");
    scanf("%f %f %f",&a,&b,&c);
    d = (a*a)+(b*b)+(c*c);
    printf("a soma dos quadrados dos tres valores e %.2f",d);

    return 0;
}
