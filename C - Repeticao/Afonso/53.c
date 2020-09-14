#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n = 6, x=0;

    for (int i=1; i<=n ; i++)
    {
        for(int j=1; j<=i; j++)
        {
            x++;
            printf("%d ",x);
        }
        printf("\n");
    }
    return 0;
}