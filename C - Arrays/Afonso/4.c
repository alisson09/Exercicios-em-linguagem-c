#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x = 1, y = 2;
    float A[8] = {2.5, 5, 3, 7.5, 4, 15, 3.7, 9};
    printf("Vetor[%d] + Vetor[%d] = %.2f\n",x,y,(A[x]+A[y]));
    return 0;
}