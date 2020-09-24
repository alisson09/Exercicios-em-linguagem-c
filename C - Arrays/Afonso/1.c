#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i,soma=0;
    int A[6] = {1, 0, 5, -2, -5, 7};
    A[4] = 100;
    soma = A[0] + A[1] + A[5];
    printf("Soma: %d\n",soma);
    for(i=0;i<6;i++)
    {
        printf("Position %do: %d\n",i,A[i]);
    }
    return 0;
}