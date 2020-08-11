#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float c;
    printf("Grau Celsius: ");
    scanf("%f",&c);
    printf("Grau Kelvin: %0.2f",(c+273.15) );
    return 0;
}
