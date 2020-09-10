#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int res1, res2;
    float resTot;
    do
    {
        printf("R1 e R2: ");
        scanf("%d %d",&res1,&res2);
        resTot=( (res1*res2)/(res1+res2) );
        printf("Resistencia: %0.2f\n",resTot);
    } while (res1>0 && res2>0);
    return 0;
}