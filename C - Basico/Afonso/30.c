#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float real,dolar;

    printf("Valor real: ");
    scanf("%f",&real);

    printf("Cotacao dolar: ");
    scanf("%f",&dolar);

    printf("Valor dolares: %0.2f",(real/dolar));
    return 0;
}
