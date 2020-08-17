#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float a,b,c;
    printf("Digite o salario: ");
    scanf("%f",&a);
    printf("Digite o valor da prestacao: ");
    scanf("%f",&b);
    c = a*0.20;
    if(b>c){
        printf("Emprestimo nao concedido");
    }else if(b<=c){
        printf("Emprestimo concedido");
    }

    return 0;
}
