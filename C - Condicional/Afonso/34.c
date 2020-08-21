#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int faltas;
    float nota;

    printf("Nota: ");
    scanf("%f",&nota);

    if (nota>=0.0 && nota<=10.0)
    {
        printf("Faltas: ");
        scanf("%d",&faltas);
        
        if (nota>=0.0 && nota<=3.9)
        {
            if (faltas>20)
            {
                printf("Conceito: E");
            }
            else
            {
                printf("Conceito: E");
            }
            
        }
        else if (nota>=4.0 && nota<=4.9)
        {
            if (faltas>20)
            {
                printf("Conceito: E");
            }
            else
            {
                printf("Conceito: D");
            }
            
        }
        else if (nota>=5.0 && nota<=7.4)
        {
            if (faltas>20)
            {
                printf("Conceito: D");
            }
            else
            {
                printf("Conceito: C");
            }
            
        }
        else if (nota>=7.5 && nota<=8.9)
        {
            if (faltas>20)
            {
                printf("Conceito: C");
            }
            else
            {
                printf("Conceito: B");
            }
            
        }
        else
        {
            if (faltas>20)
            {
                printf("Conceito: B");
            }
            else
            {
                printf("Conceito: A");
            }
        }
    }
    else
    {
        printf("Nota invalida");
    }    
    return 0;
}