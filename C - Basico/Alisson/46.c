#include <stdio.h>
#include <stdlib.h>

int main (){
    int num,a,b,c;
    printf("Digite um numero inteiro positivo de tres digitos: ");
    scanf("%d",&num);
    a = num / 100;
    b = (num % 100)/10;
    c = num % 10;
    printf("O numero invertido e %d %d %d",c,b,a);

    return 0;
}
