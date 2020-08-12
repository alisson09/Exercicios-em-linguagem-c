#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float area;
    printf("Area hectares: ");
    scanf("%f",&area);
    printf("Area metros quadrados: %0.3f",(area*10000));
    return 0;
}
