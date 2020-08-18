#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int numero;
    printf("Numero: ");
    scanf("%d",&numero);
    
    if (numero>=0)
    {
        printf("Logaritmo: %d",(log(numero)));
    }
    else
    {
        printf("Numero invalido");
    }
    
    return 0;
}
