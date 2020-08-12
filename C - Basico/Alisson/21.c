#include <stdio.h>
#include <stdlib.h>

int main (){
    float k,l;
    printf("Digite uma massa em libras: ");
    scanf("%f",&l);
    k = l*0.45;
    printf("a massa em kg e %.2f",k);

    return 0;
}
