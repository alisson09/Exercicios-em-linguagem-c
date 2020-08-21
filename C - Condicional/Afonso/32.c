#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int codigo,quantidade;
    float preco;
    printf("Codigo: ");
    scanf("%d",&codigo);
    
    if (codigo>=100 && codigo<=106)
    {
        printf("Quantidade: ");
        scanf("%d",&quantidade);

        if (codigo==100)
        {
            preco=quantidade*1.20;
            printf("%d x Cachorro Quente\n",quantidade);
        }
        else if (codigo==101)
        {
            preco=quantidade*1.30;
            printf("%d x Bauru Simples\n",quantidade);
        }
        else if (codigo==102)
        {
            preco=quantidade*1.50;
            printf("%d x Bauru com Ovo\n",quantidade);
        }
        else if (codigo==103)
        {
            preco=quantidade*1.20;
            printf("%d x Hamburguer\n",quantidade);
        }
        else if (codigo==104)
        {
            preco=quantidade*1.70;
            printf("%d x Cheeseburguer\n",quantidade);
        }
        else if (codigo==105)
        {
            preco=quantidade*2.20;
            printf("%d x Suco\n",quantidade);
        }
        else
        {
            preco=quantidade*1.00;
            printf("%d x Refrigerante\n",quantidade);
        }
        printf("Total RS: %0.2f", preco);   
    }
    else
    {
        printf("Codigo invalido!");
    }
    return 0;
}