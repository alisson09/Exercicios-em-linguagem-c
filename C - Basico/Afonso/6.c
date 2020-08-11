#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float c;
    printf("Grau Celsius: ");
    scanf("%f",&c);
    printf("Grau Fahrenheit: %0.2f",((c*9/5))+32) ;
    return 0;
}
