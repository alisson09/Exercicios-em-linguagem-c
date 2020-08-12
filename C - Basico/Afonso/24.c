#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float area;
    printf("Area metros quadrados: ");
    scanf("%f",&area);
    printf("Area acres: %0.2f",(area/4048.58));
    return 0;
}
