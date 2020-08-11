#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float massa;
    printf("Massa em quilogramas: ");
    scanf("%f",&massa);
    printf("Massa em libras: %0.2f",(massa/0.45));
    return 0;
}
