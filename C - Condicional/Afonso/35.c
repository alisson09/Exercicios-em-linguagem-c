#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int dia,mes,ano;

    printf("Dia: ");
    scanf("%d",&dia);
    
    if (dia>0 && dia<32)
    {
        printf("Mes: ");
        scanf("%d",&mes);

        if (mes>0 && mes<13)
        {
            printf("Ano: ");
            scanf("%d",&ano);

            if (ano>=0)
            {
                if (mes==1)
                {
                    if (dia>0 && dia<32)
                    {
                        printf("Data Valida: %d de janeiro de %d",dia,ano);
                    }
                    else
                    {
                        printf("Data invalida: dia do mes nao existe");
                    }
                }
                else if (mes==2)
                {
                    if (ano%4==0)
                    {
                        if (dia>0 && dia<30)
                        {
                            printf("Data Valida: %d de fevereiro de %d (bissexto)",dia,ano);
                        }
                        else
                        {
                            printf("Data invalida: dia do mes nao existe");
                        }
                    }
                    else
                    {
                        if (dia>0 && dia<29)
                        {
                            printf("Data Valida: %d de fevereiro de %d",dia,ano);
                        }
                        else
                        {
                            printf("Data invalida: dia do mes nao existe");
                        }
                    }
                    
                }
                else if (mes==3)
                {
                    if (dia>0 && dia<32)
                    {
                        printf("Data Valida: %d de marco de %d",dia,ano);
                    }
                    else
                    {
                        printf("Data invalida: dia do mes nao existe");
                    }
                }
                else if (mes==4)
                {
                    if (dia>0 && dia<31)
                    {
                        printf("Data Valida: %d de abril de %d",dia,ano);
                    }
                    else
                    {
                        printf("Data invalida: dia do mes nao existe");
                    }
                }
                else if (mes==5)
                {
                    if (dia>0 && dia<32)
                    {
                        printf("Data Valida: %d de maio de %d",dia,ano);
                    }
                    else
                    {
                        printf("Data invalida: dia do mes nao existe");
                    }
                }
                else if (mes==6)
                {
                    if (dia>0 && dia<31)
                    {
                        printf("Data Valida: %d de junho de %d",dia,ano);
                    }
                    else
                    {
                        printf("Data invalida: dia do mes nao existe");
                    }
                }
                else if (mes==7)
                {
                    if (dia>0 && dia<32)
                    {
                        printf("Data Valida: %d de julho de %d",dia,ano);
                    }
                    else
                    {
                        printf("Data invalida: dia do mes nao existe");
                    }
                }
                else if (mes==8)
                {
                    if (dia>0 && dia<32)
                    {
                        printf("Data Valida: %d de agosto de %d",dia,ano);
                    }
                    else
                    {
                        printf("Data invalida: dia do mes nao existe");
                    }
                }
                else if (mes==9)
                {
                    if (dia>0 && dia<31)
                    {
                        printf("Data Valida: %d de setembro de %d",dia,ano);
                    }
                    else
                    {
                        printf("Data invalida: dia do mes nao existe");
                    }
                }
                else if (mes==10)
                {
                    if (dia>0 && dia<32)
                    {
                        printf("Data Valida: %d de outubro de %d",dia,ano);
                    }
                    else
                    {
                        printf("Data invalida: dia do mes nao existe");
                    }
                }
                else if (mes==11)
                {
                    if (dia>0 && dia<31)
                    {
                        printf("Data Valida: %d de novembro de %d",dia,ano);
                    }
                    else
                    {
                        printf("Data invalida: dia do mes nao existe");
                    }
                }
                else
                {
                    if (dia>0 && dia<32)
                    {
                        printf("Data Valida: %d de dezembro de %d",dia,ano);
                    }
                    else
                    {
                        printf("Data invalida: dia do mes nao existe");
                    }
                }
            }
            else
            {
                printf("Data invalida: esse ano nao existe");
            }
        }
        else
        {
            printf("Data invalida: esse mes nao existe");
        }
    }
    else
    {
        printf("Data invalida: esse dia nao existe");
    }
 
    return 0;
}