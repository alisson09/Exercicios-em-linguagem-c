#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int contagem=10;
    while (contagem>=0)
    {
        printf("%d \n", contagem);
        contagem--;
    }
    printf("FIM!");
    return 0;
}
