#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float velocidade;
    printf("M/S: ");
    scanf("%f",&velocidade);
    printf("KM/H: %0.2f",(velocidade*3.6));
    return 0;
}
