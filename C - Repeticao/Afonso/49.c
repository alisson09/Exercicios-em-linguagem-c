#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){

    float salCarlos,salJoao,caderneta,rendaFixa,taxa1,taxa2,rendCarlos,rendJoao,mes=0;

    printf("Salario de Carlos: ");
    scanf("%f",&salCarlos);
    salJoao = salCarlos/3;

    printf("Rendimento Caderneta: ");
    scanf("%f",&taxa1);

    printf("Rendimento Renda Fixa: ");
    scanf("%f",&taxa2);

    caderneta = taxa1/100;
    rendaFixa = taxa2/100;

    rendCarlos = salCarlos;
    rendJoao = salJoao;

    do
    {
        rendCarlos += (salCarlos*caderneta);
        rendJoao += (salJoao*rendaFixa);
        mes++;
    } while (rendCarlos>rendJoao);
    
    printf("Total de meses %0.0f\n",mes);
    printf("Rendimento Carlos: %0.2f\n",rendCarlos);
    printf("Rendimento Joao: %0.2f\n",rendJoao);
    
    return 0;
}