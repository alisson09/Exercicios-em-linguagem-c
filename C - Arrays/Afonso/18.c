#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int v[10] = {2,1,3,4,-9,6,-12,8,20,10}, x=2, conta=0;
    
    for (int i = 0; i < 10; i++)
    {
        if (v[i] % x == 0)
        {
            conta++;
            printf("%d ", v[i]);
        }
    }
    printf("\nTem no total %d multiplos de X = 2", conta);
    return 0;
}