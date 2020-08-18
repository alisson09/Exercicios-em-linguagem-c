#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
   float lab,ava,exa,med;

    printf("Laboratorio: ");
    scanf("%f",&lab);

    if (lab>=0 && lab<=10)
    {
        printf("Avaliacao: ");
        scanf("%f",&ava);

        if (ava>=0 && ava<=10)
        {
            printf("Exame: ");
            scanf("%f",&exa);

            if (exa>=0 && exa<=10)
            {
                med = ((lab*2) + (ava*3) + (exa*5)) / 10;

                if(med>0 && med<=2.9)
                {
                    printf("Aluno reprovado, media: %0.02f",med);
                }
                else
                {
                    if(med>=3 && med<=4.9)
                    {
                        printf("Aluno de recuperacao, media: %0.02f",med);
                    }
                    else
                    {
                        printf("Aluno Aprovado, media: %0.02f",med);
                    }
                }
            }
            else
            {
                printf("Nota do Exame invalida");
            }
        }
        else
        {
            printf("Nota da Avaliacao invalida");
        }       
    }
    else
    {
        printf("Nota do Laboratorio invalida");
    }
    return 0;
}
