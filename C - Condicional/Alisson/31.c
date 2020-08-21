#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int altura,peso;
    printf("Digite a altura em cm: ");
    scanf("%d",&altura);
    printf("Digite o peso: ");
    scanf("%d",&peso);
    if(altura<120 && peso<60){
        printf("Categoria A");
    }else if(altura<120 && peso>=60 && peso<=90){
        printf("Categoria D");
    }else if(altura<120 && peso>90){
        printf("Categoria G");
    }else if(altura>=120 && altura<=170 && peso<60){
        printf("Categoria B");
    }else if(altura>=120 && altura<=170 && peso>=60 && peso<=90){
        printf("Categoria E");
    }else if(altura>=120 && altura<=170 && peso>90){
        printf("Categoria H");
    }else if(altura>170 && peso<60){
        printf("Categoria C");
    }else if(altura>170 && peso>=60 && peso<=90){
        printf("Categoria F");
    }else if(altura>170 && peso>90){
        printf("Categoria I");
    }

    return 0;
}
