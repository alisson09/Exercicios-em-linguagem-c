#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    float gan1,gan2,gan3,val=78000000;
    gan1 = val*0.46;
    gan2 = val*0.32;
    gan3 = val - (gan1+gan2);
    printf("O ganhador 1 recebera %0.2f\n",gan1);
    printf("O ganhador 2 recebera %0.2f\n",gan2);
    printf("O ganhador 3 recebera %0.2f\n",gan3);
    return 0;
}