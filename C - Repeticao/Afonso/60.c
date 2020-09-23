#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num,soma=0,menor = 0, maior=0, somaPar=0, par=0,qtd=0;
    do
    {
        printf("Numero: ");
        scanf("%d",&num);
        if(num!=0) {
            if (num > maior)
            {
                maior = num;
            }
            if (menor == 0)
            {
                menor = num;
            }
            else if (num < menor)
            {
                menor = num;
            }
            qtd++;
            soma += num;
            if (num%2==0)
            {
                par++;
                somaPar += num;
            }
        }
    } while (num!=0);
    printf("Soma Total: %d\n",soma);
    printf("Quantidade: %d\n",qtd);
    printf("Media: %d\n",(soma/qtd));
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Media Par: %d\n",(somaPar/par));
    return 0;
}