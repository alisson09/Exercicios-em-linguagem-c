#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int num, maior=0,menor;
    do{
        menor = num;
        printf("Digite um numero: ");
        scanf("%d",&num);
        if (num>maior){
            maior = num;
        }else if (menor<num && menor>=0){
            menor = num;
        }
    } while (num>0);
    printf("O maior numero digitado foi = %d\n",maior);
    printf("O menor numero digitado foi = %d",menor);
    return 0;
}
