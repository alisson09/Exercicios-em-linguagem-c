#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float velocidade;
    printf("KM/H: ");
    scanf("%f",&velocidade);
    printf("M/S: %0.2f",(velocidade/3.6));
    return 0;
}
