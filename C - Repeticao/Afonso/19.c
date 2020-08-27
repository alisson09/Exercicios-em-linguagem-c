#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num, a, b, c;

    do
    {
        printf("Numero: ");
        scanf("%d", &num);
        a = num / 100;
        b = (num % 100) / 10;
        c = num % 10;
    } while (num < 100 || num > 999);

    printf("Centena %d\nDezena %d\nUnidade %d",a,b,c);

    return 0;
}