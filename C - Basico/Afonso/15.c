#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float angulo;
    printf("Angulo Radianos: ");
    scanf("%f",&angulo);
    printf("Angulo Graus: %0.2f",angulo*180/3.14);
    return 0;
}
