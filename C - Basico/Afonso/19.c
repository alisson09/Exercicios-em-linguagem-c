#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float volume;
    printf("Volume em litros: ");
    scanf("%f",&volume);
    printf("Volume em metros cubicos: %0.2f",(volume/1000));
    return 0;
}
