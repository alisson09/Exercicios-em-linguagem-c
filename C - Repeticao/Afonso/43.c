#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int idade,total=0,idadeTotal=0;
    do
    {
        printf("Idade: ");
        scanf("%d",&idade);
        if (idade>0)
        {
            idadeTotal+=idade;
            total++;
        }
    } while (idade>0);
    printf("Media: %d",(idadeTotal/total));
    return 0;
}