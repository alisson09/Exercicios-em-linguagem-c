#include <stdio.h>
#include <stdlib.h>

int main (){
    float k,l;
    printf("Digite uma massa em kg: ");
    scanf("%f",&k);
    l = k/0.45;
    printf("a massa em libras e %.2f",l);

    return 0;
}
