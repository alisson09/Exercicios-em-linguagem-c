#include <stdio.h>
#include <stdlib.h>

int main (){
    int a,b;
    printf("Digite um numero: ");
    scanf("%d",&a);
    printf("Digite outro numero: ");
    scanf("%d",&b);
    if(a>b){
        printf("O numero %d e maior que %d",a,b);
    }else{
        printf("O numero %d e maior que %d",b,a);
    }

    return 0;
}
