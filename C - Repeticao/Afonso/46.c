#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int esc,a;
    srand(time(NULL));
    a=rand()%1000;
    do{
        printf("Tente adivinhar o numero: ");
        scanf("%d",&esc);
        if(esc>a){
            printf("Menor!\n");
        }else if(esc<a){
            printf("Maior!\n");
        }else if(esc==a){
            printf("Acertou!");
        }
    }while(esc!=a);

    return 0;
}