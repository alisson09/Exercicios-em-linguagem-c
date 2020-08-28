#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int fat, n, e;

    printf("Numero: ");
    scanf("%d", &n);

    for (fat = 1; n > 1; n = n - 1)
    {
        fat = fat * n;
    }

    e = 1+(1/fat);

    printf("E = %d", e);
    return 0;
}