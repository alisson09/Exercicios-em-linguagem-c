#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Numero: ");
    scanf("%d", &num);

    if (num%2==0)
    {
        for (int i = num; i >= 0; i--)
        {
            if (i%2==0)
            {
                printf("%d ", i);
            }
            
        }
    }
    else
    {
        printf("Numero nao par");
    }
    return 0;
}
