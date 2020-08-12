#include <stdio.h>
#include <stdlib.h>

int main (){
    float a,m;
    printf("Digite uma area em metros quadrados: ");
    scanf("%f",&m);
    a = m*0.000247;
    printf("a area em acres e %.2f",a);

    return 0;
}
