#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float area;
    printf("Area metros quadrados: ");
    scanf("%f",&area);
    printf("Area hectares: %0.3f",(area*0.0001));
    return 0;
}
