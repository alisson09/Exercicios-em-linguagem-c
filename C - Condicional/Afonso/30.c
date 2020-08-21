#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num1,num2,num3;
    printf("Numero 1: ");
    scanf("%d",&num1);
    printf("Numero 2: ");
    scanf("%d",&num2);
    printf("Numero 3: ");
    scanf("%d",&num3);

    if (num1>num2 && num1>num3)
    {
        if (num2>num3)
        {
            printf("Ordem crescente: %d, %d, %d",num3,num2,num1);
        }else
        {
            printf("Ordem crescente: %d, %d, %d",num2,num3,num1);
        }
    }
    else if (num2>num1 && num2>num3)
    {
        if (num1>num3)
        {
            printf("Ordem crescente: %d, %d, %d",num3,num1,num2);
        }else
        {
            printf("Ordem crescente: %d, %d, %d",num1,num3,num2);
        }
    }
    else
    {
        if (num1>num2)
        {
            printf("Ordem crescente: %d, %d, %d",num2,num1,num3);
        }else
        {
            printf("Ordem crescente: %d, %d, %d",num1,num2,num3);
        }
    }
    return 0;
}
