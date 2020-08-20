#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a,b,c;
    printf("Digite tres valores!\n");
    printf("Digite A: ");
    scanf("%d",&a);
    printf("Digite B: ");
    scanf("%d",&b);
    printf("Digite C: ");
    scanf("%d",&c);
    if(a+b<c || a+c<b || b+c<a ){
        printf("Nao e um triangulo!");
    }else if(a==b && a==c){
        printf("E um triangulo equilatero!");
    }else if(a==b || a==c || b==c){
        printf("E um triangulo isosceles!");
    }else if(a!=b && a!=c && b!=c){
        printf("E um triangulo escaleno!");
    }

    return 0;
}
