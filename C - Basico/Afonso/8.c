#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float k;
    printf("Grau Kelvin: ");
    scanf("%f",&k);
    printf("Grau Celsius: %0.2f",(k-273.15) );
    return 0;
}
