#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x=0, multiplos=0;
     while (x<5)
     {
         x++;
         multiplos = multiplos + 3;
         printf("Multiplo %d = %d\n",x, multiplos);
     }
    return 0;
}
