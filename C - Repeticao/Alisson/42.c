#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    float num,quad,cub,raiz;
    do{
        printf("Digite um numero: ");
        scanf("%f",&num);
        quad=num*num;
        cub=num*num*num;
        raiz=sqrt(num);
        if(num>0){
        printf("Quadrado: %.2f\n",quad);
        printf("Cubo: %.2f\n",cub);
        printf("Raiz: %.2f\n",raiz);
        }else if(num<=0){
            printf("Numero invalido!");
        }
    } while (num>0);
    return 0;
}
