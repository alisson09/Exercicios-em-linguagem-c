#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int ano;

    printf("Digite um ano: ");
        scanf("%d",&ano);

    if( (ano%400==0) || ((ano%4==0) && (ano%100!=0)) )
    {
        printf("Ano Bissexto");
    }
    else
    {
        printf("Ano nao Bissexto");
    }
return 0;
}
