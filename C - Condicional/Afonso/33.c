#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float precoAntigo, precoNovo;
    printf("Preco antigo: ");
    scanf("%f",&precoAntigo);
    
    if (precoAntigo<50)
    {
        precoNovo = precoAntigo + (precoAntigo*0.05);
    }
    else if (precoAntigo>=50 && precoAntigo<=100)
    {
        precoNovo = precoAntigo + (precoAntigo*0.10);
    }
    else
    {
        precoNovo = precoAntigo + (precoAntigo*0.15);
    }
    printf("Preco novo: %0.2f. ",precoNovo);

    if (precoNovo<80)
    {
        printf("Barato");
    }
    else if (precoNovo>=80 && precoNovo<=120)
    {
        printf("Normal");
    }
    else if (precoNovo>120 && precoNovo<=200)
    {
        printf("Caro");
    }
    else
    {
        printf("Muito caro");
    }
    return 0;
}

