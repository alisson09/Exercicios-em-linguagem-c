#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int numero=1000, soma=0;
    
    for (int i = 1; i < numero; i++)
    {
        if ((i%3 == 0) || (i%5 == 0))
        {
            soma += i;
        }
    }
    printf("Soma dos Divisores: %d", soma);
    return 0;
}