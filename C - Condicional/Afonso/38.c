#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define anoAtual 2008

int main(int argc, char const *argv[])
{
    int dia, mes, ano;

    printf("Data de nascimento_\nDia / Mes / Ano: ");
    scanf("%d %d %d",&dia,&mes,&ano);

    if ((dia>0 && dia<32) && (mes>0 && mes<13) && (ano<=anoAtual))
    {
        if (dia <= 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11))
        {
            printf("Data Valida");
        }
        else if (dia <= 31 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12))
        {
            printf("Data Valida");
        }
        else
        {
            if (dia <= 29 && mes == 2 && ano % 4 == 0)
            {
                printf("Data Valida");
                //printf("Ano Bissexto");
            }
            else if (dia <= 28 && mes == 2 && ano % 4 != 0)
            {
                printf("Data Valida");
                //printf("Ano nao Bissexto");
            }
            else
            {
                printf("Data Invalida");
            }
        }
    }
    else
    {
        printf("Data invalida");
    }
    
    return 0;
}