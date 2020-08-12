#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float raio;
    printf("Raio do circulo: ");
    scanf("%f",&raio);
    printf("Area: %0.2f",(3.141592*(raio*raio)));
    return 0;
}
