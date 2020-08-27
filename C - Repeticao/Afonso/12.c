#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Numero: ");
    scanf("%d", &num);

    for (int i=num; i >= 0; i--)
    {
        printf("%d ", i);
    }
    return 0;
}
