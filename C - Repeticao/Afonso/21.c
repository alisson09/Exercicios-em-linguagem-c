#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num1, num2, par = 0, impar = 1;

    printf("Numero 1: ");
    scanf("%d", &num1);

    printf("Numero 2: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        for (int i = num2; i <= num1; i++)
        {
            if (i % 2 == 0)
            {
                par += i;
            }
            else
            {
                impar *= i;
            }
            
        }
    }
    else
    {
        for (int i = num1; i <= num2; i++)
        {
            if (i % 2 == 0)
            {
                par += i;
            }
            else
            {
                impar *= i;
            }
        }
    }
    printf("\nSoma de pares: %d\nMultiplicacao dos impares: %d", par, impar);
    return 0;
}