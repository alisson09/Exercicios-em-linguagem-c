#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    float sal;
    printf("Digite o salario atual: ");
    scanf("%f",&sal);
    printf("Novo salario: %0.2f",(sal + (sal*0.25)));
    return 0;
}