#include <stdio.h>
#include <stdlib.h>

int main (){
    float h,m;
    printf("Digite uma area em metros quadrados: ");
    scanf("%f",&m);
    h = m*0.0001;
    printf("a area em hectares e %.2f",h);

    return 0;
}
