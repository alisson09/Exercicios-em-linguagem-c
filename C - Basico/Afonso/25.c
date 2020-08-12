#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float area;
    printf("Area acres: ");
    scanf("%f",&area);
    printf("Area metros quadrados: %0.2f",(area*4048.58));
    return 0;
}
