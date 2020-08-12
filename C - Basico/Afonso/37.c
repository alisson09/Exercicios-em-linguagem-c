#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    float val;
    printf("Valor do produto: ");
    scanf("%f",&val);
    printf("Valor do produto com desconto: %0.2f",(val-(val*0.12)));
    return 0;
}