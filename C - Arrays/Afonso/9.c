#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int v[6] = {2,8,12,4,22,6};

    for (int i = 5; i >= 0; i--)
    {
        printf("Vetor[%d] = %d\n",i,v[i]);
    }
    return 0;
}