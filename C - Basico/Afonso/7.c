#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float f;
    printf("Grau Fahrenheit: ");
    scanf("%f",&f);
    printf("Grau Celsius: %0.2f",(5*(f-32)/9) ) ;
    return 0;
}
