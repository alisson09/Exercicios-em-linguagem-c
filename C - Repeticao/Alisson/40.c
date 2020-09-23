#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int num,maior=0,menor=0;

    do{
        printf("Digite um numero: ");
        scanf("%d",&num);
            if(num > 0){
			if (num > maior){
                maior = num;
            }
			if (menor == 0){
                menor = num;
            }else if (num < menor){
                menor = num;
            }
	    }

    }while(num>0);

    printf("Maior numero digitados: %d\n",maior);
    printf("Menor numero digitados: %d\n",menor);

    return 0;
}
