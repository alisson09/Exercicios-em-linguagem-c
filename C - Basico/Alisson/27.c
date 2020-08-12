#include <stdio.h>
#include <stdlib.h>

int main (){
    float h,m;
    printf("Digite uma area em hectares: ");
    scanf("%f",&h);
    m = h*10000;
    printf("a area em metros quadrados e %.2f",m);

    return 0;
}
