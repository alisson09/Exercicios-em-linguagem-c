#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i,v[15];
    float media=0;
    srand(time(NULL));
    for (i = 0; i < 15; i++)
    {
        v[i] = rand()%10;
        printf("Nota %d =  %d\n",i+1,v[i]);
        media+=v[i];
    }
    printf("Media: %.2f",(media/15));
    return 0;
}