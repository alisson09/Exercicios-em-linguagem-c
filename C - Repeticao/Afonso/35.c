#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num1,num2,impar=0;

    printf("Valor do intervalo: ");
    scanf("%d %d",&num1,&num2);

    if (num1>0 && num2>0 && (num1<num2))
    {
        for (int i = num1; i <= num2; i++)
        {
           if (i%2!=0)
           {
               impar+=i;
           }
        }
        printf("Total de impares: %d",impar);
    }
    else
    {
        printf("Intervalo de valores invalido");
    }
    return 0;
}