#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a,b,c;
    printf("Digite um numero: ");
    scanf("%d",&a);
    printf("Digite outro numero: ");
    scanf("%d",&b);
    if(a>b){
        printf("O numero %d e o maior",a);
    }else if(b>a){
        printf("O numero %d e o maior",b);
    }else if(a==b){
        printf("Os dois numeros sao iguais");
    }

    return 0;
}
