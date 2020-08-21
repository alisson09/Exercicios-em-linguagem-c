#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a,b,c;
    printf("Digite tres numeros: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && b<c){
        printf("A ordem crescente e = %d, %d, %d",a,b,c);
    }else if(a<b && c<b){
        printf("A ordem crescente e = %d, %d, %d",a,c,b);
    }else if(b<a && a<c){
        printf("A ordem crescente e = %d, %d, %d",b,a,c);
    }else if(b<c && c<a){
        printf("A ordem crescente e = %d, %d, %d",b,c,a);
    }else if(c<a && a<b){
        printf("A ordem crescente e = %d, %d, %d",c,a,b);
    }else if(c<b && b<a){
        printf("A ordem crescente e = %d, %d, %d",c,b,a);
    }

    return 0;
}
