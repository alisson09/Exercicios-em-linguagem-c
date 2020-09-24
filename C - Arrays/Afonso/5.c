#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int A[10] = {2.5, 5, 3, 7.5, 4, 15, 3.7, 9, 8, 55},par=0;
    
    for(int i=0;i<10;i++)
    {
        if (A[i]%2==0)
        {
            printf("Vetor[%d]: %d\n",i,A[i]);
            par++;
        }
    }
    printf("Existem %d pares\n",par);
    return 0;
}
