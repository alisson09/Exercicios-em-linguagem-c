#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int nota, total=0, lidos=0;
   do
   {
        printf("Nota: ");
        scanf("%d", &nota);
        if (nota>=10 && nota<=20)
        {
            total+=nota;
            lidos++;
        }
   } while (nota>=10 && nota<=20);
   
    printf("\nMedia Total: %d", (total/lidos) );
    return 0;
}