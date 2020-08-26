#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int number=0, numero=0;

    printf("WHILE: ");
     while (number<100)
     {
         number++;
         printf("%d ",number);
     }

     printf("\nDO-WHILE: ");
     do {
        numero++;
        printf("%d ",numero);
    } while (numero<100);

    printf("\nFOR: ");
    for (int i = 1; i <= 100; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
