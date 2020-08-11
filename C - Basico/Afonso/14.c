#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float angulo;
    printf("Angulo Graus: ");
    scanf("%f",&angulo);
    printf("Angulo Radianos: %0.2f",angulo*3.14/180);
    return 0;
}
