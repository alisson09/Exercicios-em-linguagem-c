#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num,soma=0;
    printf("Numero: ");
    scanf("%d", &num);

    if (num>=0)
    {
        for (int i = 0; i <= num; i++)
        {
            soma += i;
        }
        printf("Total = %d", soma);
    }
    else
    {
        printf("Numero nao positivo");
    }
    return 0;
}
