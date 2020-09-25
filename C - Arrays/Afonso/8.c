#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int v[6] = {2,1,3,4,-9,6};

    for (int i = 5; i >= 0; i--)
    {
        printf("Vetor[%d] = %d\n",i,v[i]);
    }
    return 0;
}