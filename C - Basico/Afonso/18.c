#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float volume;
    printf("Volume em metros cubicos: ");
    scanf("%f",&volume);
    printf("Volume em litros: %0.2f",(1000*volume));
    return 0;
}
