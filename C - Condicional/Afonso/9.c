#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float salario, emprestimo;
    printf("Salario: ");
    scanf("%f", &salario);

    printf("Emprestimo: ");
    scanf("%f", &emprestimo);

    if (emprestimo>(salario*0.20))
    {
        printf("Emprestimo nao concedido");
    }
    else
    {
        printf("Emprestimo concedido");
    }
    
    return 0;
}
