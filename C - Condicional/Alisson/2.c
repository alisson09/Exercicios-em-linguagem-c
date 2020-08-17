#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a,b;
    printf("Digite um numero: ");
    scanf("%d",&a);
    b = sqrt(a);
    if(a>0){
        printf("A raiz quadrada de %d e = %d",a,b);
    }else{
        printf("O numero e invalido");
    }

    return 0;
}
