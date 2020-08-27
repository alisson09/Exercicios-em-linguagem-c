#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int n,a,b,c;
    do{
    printf("Digite um numero inteiro de 3 algarismos: ");
    scanf("%d",&n);
       a = n/100;
       b = (n%100)/10;
       c = n%10;
    }while(n<100 || n>999);
    printf("Os algarismos que compoe o numero sao %d, %d e %d",a,b,c);

    return 0;
}

