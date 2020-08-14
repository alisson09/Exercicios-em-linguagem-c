#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    char x,y;
    printf("Letra maiuscula: ");
    scanf("%c",&x);
    y=x+32;
    printf("Letra minuscula: %c",y);
    return 0;
}