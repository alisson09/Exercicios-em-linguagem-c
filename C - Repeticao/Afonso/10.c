#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{   
    int soma=0;
    for (int i = 0; i <= 100; i++)
    {
        if (i%2==0)
        {
            soma += i; 
        }
    }
    printf("Total = %d", soma);
    return 0;
}