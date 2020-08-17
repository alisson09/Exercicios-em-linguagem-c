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
        c = a-b;
        printf("O numero %d e maior que %d e a diferenca entre ambos e = %d",a,b,c);
    }else{
        c = b-a;
        printf("O numero %d e maior que %d e a diferenca entre ambos e = %d",b,a,c);
    }

    return 0;
}
