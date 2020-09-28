#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int v[10] = {2,1,3,4,-9,6,-12,8,20,10};

    for (int i = 0; i < 10; i++)
    {
        if (v[i] < 0)
        {
            v[i] = 0;
        }
        printf("%d ", v[i]);
    }
    return 0;
}