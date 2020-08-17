#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a;
    printf("Digite um numero: ");
    scanf("%d",&a);
    if(a%2 == 0){
        printf("O numero e par");
    }else{
        printf("O numero e impar");
    }

    return 0;
}
