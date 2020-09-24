#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float A[10] = {2.5, 5, 3, 7.5, 4, 15, 3.7, 9, 8, 55}, B[10];
    
    for(int i=0;i<10;i++)
    {
        B[i] = A[i]*A[i];
        printf("Vetor[%d]: %.2f\n",i,B[i]);
    }
    return 0;
}
