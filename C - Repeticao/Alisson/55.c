#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int i, num, cont = 0, x = 1, aux = 1, soma = 0;

    do{
        printf("Digite um numero inteiro e positivo: ");
        scanf("%d", &num);
    }while (num <= 1);

    do{
        for (i = 1; i <= x; i++){
            if (x % i == 0){
                cont++;
            }
        }
        if (cont == 2){
            printf("O numero %d e primo!\n", x);
            soma += x;
            cont = 0;
        }else if(cont !=2 || x==1){
            printf("O numero %d nao e primo!\n", x);
            cont = 0;
        }
        x++;
        aux++;
    } while (aux <= num);
    printf("soma: %d", soma);

    return 0;
}
