#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int v[10] = {2,1,3,4,-9,6,-12,8,20,10}, negativo=0,soma=0;

    for (int i = 0; i < 10; i++)
    {
        if (v[i] < 0)
        {
            negativo++;
        }
        else
        {
            soma+=v[i];
        }
    }
    printf("Qtd Negativos: %d\n", negativo);
    printf("Soma Positivos: %d\n", soma);
    return 0;
}