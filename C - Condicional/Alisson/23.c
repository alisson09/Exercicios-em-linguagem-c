#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int ano;
    printf("Digite o ano: ");
    scanf("%d",&ano);
    if(ano%400 == 0 || ano%4 == 0 && ano%100 != 0){
        printf("O ano e bissexto!");
    }else{
        printf("O ano nao e bissexto");
    }

    return 0;
}
