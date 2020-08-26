#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i=1, soma=0, valor;
    do
    {
        printf("Valor %d: ", i);
        scanf("%d", &valor);
        if (valor >= 0)
        {
            soma += valor;
            i++;
        }
    } while (i <= 10);
    printf("Media: %d",(soma/10));
    return 0;
}
