#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  int idade,tempo;

    printf("Idade do trabalhador: ");
        scanf("%d",&idade);
    printf("Tempo de servico: ");
        scanf("%d",&tempo);

    if(idade>=65)
    {
        printf("Aposentadoria permitida por idade");
    }
    else if(tempo>=25 && idade>=60)
    {
        printf("Aposentadoria permitida por idade e tempo de servico");
    }
    else if(tempo>=30 && idade>tempo)
    {
        //Lembrando que a idade de uma pessoa deve ser maior que o tempo de servico(ex: uma pessoa com 25 anos, nao pode ter trabalhado por 30 anos)
        printf("Aposentadoria permitida por tempo de servico");
    }
    else
    {
        printf("Tempo de servico e idade insuficiente para aposentadoria");
    }
return 0;
}
