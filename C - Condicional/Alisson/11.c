#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a,b,c,d,res;
    printf("Digite um numero inteiro maior que zero: ");
    scanf("%d",&a);
    if(a>0){
        b = a/100;
        c = (a%100)/10;
        d = a%10;
        res = b+c+d;
        printf("A soma de todos os algarismos e = %d",res);
    }else{
        printf("Numero invalido");
    }

    return 0;
}
