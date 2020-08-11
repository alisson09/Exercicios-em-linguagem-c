#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float numero;
    printf("Digite um valor: ");
    scanf("%f",&numero);
    printf("%0.2f / 5 = %0.2f",numero,(numero/5));
    return 0;
}
