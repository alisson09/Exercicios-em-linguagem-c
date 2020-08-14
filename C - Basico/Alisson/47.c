#include <stdio.h>
#include <stdlib.h>

int main (){
    int num,a,b,c,d;
    printf("Digite um numero inteiro de quatro digitos: ");
    scanf("%d",&num);
    a = num / 1000;
    b = (num % 1000)/100;
    c = (num % 100)/10;
    d = num % 10;
    printf("O primeiro digito e %d\n",a);
    printf("O segundo digito e %d\n",b);
    printf("O terceiro digito e %d\n",c);
    printf("O quarto digito e %d",d);

    return 0;
}
