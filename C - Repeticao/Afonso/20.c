#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num, contagem=0, lidos=0;
   do
   {
        printf("Numero: ");
        scanf("%d", &num);

       if (num%2==0)
       {
           contagem++;
       }

       lidos++;

   } while (num != 1000);
   
    printf("\nTotal de pares: %d\nNumeros lidos: %d", contagem, lidos);
    return 0;
}