#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num, maior=0, menor;
    do
    {
        menor = num;
        printf("Numero: ");
        scanf("%d",&num);
        if (num>maior)
        {
            maior = num;
        }
        if (menor<num && menor>=0)
        {
            menor = num;
        } 
    } while (num>=0);
    printf("Maior: %d\n",maior);
    printf("Maior: %d",menor);
    return 0;
}
