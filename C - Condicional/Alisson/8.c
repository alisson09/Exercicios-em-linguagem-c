#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float a,b,c;
    printf("Digite a primeira nota: ");
    scanf("%f",&a);
    printf("Digite a segunda nota: ");
    scanf("%f",&b);
    if(a>=0 && b>=0 && a<=10 && b<=10){
        c = (a+b)/2;
        printf("A media do aluno e %.2f",c);
    }else if(a<0 || a>10){
        printf("O numero %.2f e invalido",a);
    }else if(b<0 || b>10){
        printf("O numero %.2f e invalido",b);
    }

    return 0;
}
