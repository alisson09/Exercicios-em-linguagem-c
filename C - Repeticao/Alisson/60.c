#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int num, cont = 0, soma = 0, pares = 0, contPar = 0, maior = 0, menor = 0, media = 0, mediaPar = 0;
    do{
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num != 0){
            if (num > maior){
                maior = num;
            }
            if (menor == 0){
                menor = num;
            }else if (num < menor){
                menor = num;
            }
            cont++;
            soma += num;
            if (num % 2 == 0){
                contPar++;
                pares += num;
            }
        }
    } while (num != 0);

    media = soma / cont;
    mediaPar = pares / contPar;

    printf("Soma dos numeros digitados: %d\n", soma);
    printf("Quantidade de numeros digitados: %d\n", cont);
    printf("Media dos numeros digitados: %d\n", media);
    printf("Maior numero digitados: %d\n", maior);
    printf("Menor numero digitados: %d\n", menor);
    printf("Media dos numeros pares digitados: %d", mediaPar);

    return 0;
}
